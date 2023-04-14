-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1
-- Время создания: Апр 14 2023 г., 16:52
-- Версия сервера: 10.4.21-MariaDB
-- Версия PHP: 8.0.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `test`
--

-- --------------------------------------------------------

--
-- Структура таблицы `catalogwallpaper`
--

CREATE TABLE `catalogwallpaper` (
  `idwallpaper` int(11) UNSIGNED NOT NULL,
  `nameMark` varchar(256) CHARACTER SET latin1 NOT NULL,
  `price` double NOT NULL,
  `width` double NOT NULL,
  `length` double NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Дамп данных таблицы `catalogwallpaper`
--

INSERT INTO `catalogwallpaper` (`idwallpaper`, `nameMark`, `price`, `width`, `length`) VALUES
(1, 'Romashka', 1500.5, 800, 10.5),
(2, 'Vasilek', 1200.5, 900, 10),
(3, 'Oduvan', 1700.5, 1000, 11.5),
(4, 'Klever', 2000.5, 1100, 12.5);

--
-- Индексы сохранённых таблиц
--

--
-- Индексы таблицы `catalogwallpaper`
--
ALTER TABLE `catalogwallpaper`
  ADD PRIMARY KEY (`idwallpaper`);

--
-- AUTO_INCREMENT для сохранённых таблиц
--

--
-- AUTO_INCREMENT для таблицы `catalogwallpaper`
--
ALTER TABLE `catalogwallpaper`
  MODIFY `idwallpaper` int(11) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
