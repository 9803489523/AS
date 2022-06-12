/*
Navicat MySQL Data Transfer

Source Server         : AISAASaRC
Source Server Version : 50525
Source Host           : localhost:3306
Source Database       : branchsale

Target Server Type    : MYSQL
Target Server Version : 50525
File Encoding         : 65001

Date: 2014-05-06 02:52:36
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `articles`
-- ----------------------------
DROP TABLE IF EXISTS `articles`;
CREATE TABLE `articles` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `ArticleName` varchar(50) NOT NULL,
  `isIncome` tinyint(1) NOT NULL DEFAULT '0',
  `Plan` decimal(10,2) NOT NULL DEFAULT '0.00',
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of articles
-- ----------------------------
INSERT INTO `articles` VALUES ('5', 'Вода', '0', '12.00');
INSERT INTO `articles` VALUES ('6', 'Отопление', '1', '30.00');

-- ----------------------------
-- Table structure for `branches`
-- ----------------------------
DROP TABLE IF EXISTS `branches`;
CREATE TABLE `branches` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `BranchName` varchar(50) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of branches
-- ----------------------------
INSERT INTO `branches` VALUES ('3', 'Киев');
INSERT INTO `branches` VALUES ('4', 'Одесса');

-- ----------------------------
-- Table structure for `clients`
-- ----------------------------
DROP TABLE IF EXISTS `clients`;
CREATE TABLE `clients` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `ClientName` varchar(255) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of clients
-- ----------------------------
INSERT INTO `clients` VALUES ('2', 'Петр');
INSERT INTO `clients` VALUES ('3', 'Игорь');

-- ----------------------------
-- Table structure for `expenses`
-- ----------------------------
DROP TABLE IF EXISTS `expenses`;
CREATE TABLE `expenses` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `BranchId` int(11) NOT NULL,
  `ArticleId` int(11) NOT NULL,
  `DateExpense` datetime NOT NULL,
  `Suma` decimal(10,2) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FK_expenses_articles_Id` (`ArticleId`),
  KEY `FK_expenses_branches_Id` (`BranchId`),
  CONSTRAINT `FK_expenses_articles_Id` FOREIGN KEY (`ArticleId`) REFERENCES `articles` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `FK_expenses_branches_Id` FOREIGN KEY (`BranchId`) REFERENCES `branches` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of expenses
-- ----------------------------
INSERT INTO `expenses` VALUES ('1', '3', '5', '2014-05-06 00:00:00', '13.00');

-- ----------------------------
-- Table structure for `items`
-- ----------------------------
DROP TABLE IF EXISTS `items`;
CREATE TABLE `items` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `ItemName` varchar(50) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of items
-- ----------------------------
INSERT INTO `items` VALUES ('4', 'Соль');
INSERT INTO `items` VALUES ('5', 'Олия');

-- ----------------------------
-- Table structure for `payments`
-- ----------------------------
DROP TABLE IF EXISTS `payments`;
CREATE TABLE `payments` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `SaleId` int(11) NOT NULL,
  `DatePay` datetime NOT NULL,
  `Suma` decimal(10,2) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FK_payments_sales_Id` (`SaleId`),
  CONSTRAINT `FK_payments_sales_Id` FOREIGN KEY (`SaleId`) REFERENCES `sales` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of payments
-- ----------------------------
INSERT INTO `payments` VALUES ('1', '11', '2014-05-06 00:00:00', '2.00');

-- ----------------------------
-- Table structure for `saleitems`
-- ----------------------------
DROP TABLE IF EXISTS `saleitems`;
CREATE TABLE `saleitems` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `SaleId` int(11) NOT NULL,
  `StockId` int(11) NOT NULL,
  `Qty` smallint(6) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FK_saleitems_sales_Id` (`SaleId`),
  KEY `FK_saleitems_stock_Id` (`StockId`),
  CONSTRAINT `FK_saleitems_sales_Id` FOREIGN KEY (`SaleId`) REFERENCES `sales` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `FK_saleitems_stock_Id` FOREIGN KEY (`StockId`) REFERENCES `stock` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of saleitems
-- ----------------------------
INSERT INTO `saleitems` VALUES ('4', '11', '4', '4');
INSERT INTO `saleitems` VALUES ('5', '11', '7', '12');
INSERT INTO `saleitems` VALUES ('6', '10', '5', '5');

-- ----------------------------
-- Table structure for `sales`
-- ----------------------------
DROP TABLE IF EXISTS `sales`;
CREATE TABLE `sales` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `BranchId` int(11) NOT NULL,
  `ClientId` int(11) NOT NULL,
  `DateSale` datetime NOT NULL,
  `Status` tinyint(2) NOT NULL DEFAULT '0',
  PRIMARY KEY (`Id`),
  KEY `FK_sales_ClientId_client_Id` (`ClientId`),
  KEY `FK_sales_BranchId_branches_Id` (`BranchId`),
  CONSTRAINT `FK_sales_BranchId_branches_Id` FOREIGN KEY (`BranchId`) REFERENCES `branches` (`Id`),
  CONSTRAINT `FK_sales_ClientId_client_Id` FOREIGN KEY (`ClientId`) REFERENCES `clients` (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of sales
-- ----------------------------
INSERT INTO `sales` VALUES ('10', '4', '2', '2014-05-05 00:00:00', '0');
INSERT INTO `sales` VALUES ('11', '3', '2', '2014-05-05 00:00:00', '0');

-- ----------------------------
-- Table structure for `stock`
-- ----------------------------
DROP TABLE IF EXISTS `stock`;
CREATE TABLE `stock` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `BranchId` int(11) NOT NULL,
  `ItemId` int(11) NOT NULL,
  `Qty` smallint(6) NOT NULL,
  `Cost` decimal(10,2) NOT NULL,
  `Plan` smallint(6) NOT NULL,
  PRIMARY KEY (`Id`),
  KEY `FK_stock_branches_Id` (`BranchId`),
  KEY `FK_stock_items_Id` (`ItemId`),
  CONSTRAINT `FK_stock_branches_Id` FOREIGN KEY (`BranchId`) REFERENCES `branches` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION,
  CONSTRAINT `FK_stock_items_Id` FOREIGN KEY (`ItemId`) REFERENCES `items` (`Id`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of stock
-- ----------------------------
INSERT INTO `stock` VALUES ('4', '3', '4', '7', '34.00', '11');
INSERT INTO `stock` VALUES ('5', '4', '5', '30', '55.00', '35');
INSERT INTO `stock` VALUES ('6', '3', '5', '12', '32.00', '12');
INSERT INTO `stock` VALUES ('7', '4', '4', '65', '65.00', '77');
