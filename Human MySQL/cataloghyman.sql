-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1
-- Время создания: Апр 20 2023 г., 21:21
-- Версия сервера: 10.4.28-MariaDB
-- Версия PHP: 8.2.4

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База данных: `human`
--

-- --------------------------------------------------------

--
-- Структура таблицы `cataloghyman`
--

CREATE TABLE `cataloghyman` (
  `idhuman` int(11) UNSIGNED NOT NULL,
  `age` int(11) NOT NULL,
  `surname` varchar(256) NOT NULL,
  `name` varchar(256) NOT NULL,
  `secondname` varchar(256) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=cp1251 COLLATE=cp1251_general_ci;

--
-- Дамп данных таблицы `cataloghyman`
--

INSERT INTO `cataloghyman` (`idhuman`, `age`, `surname`, `name`, `secondname`) VALUES
(1001, 39, 'Васильев', 'Василий', 'Васильевич'),
(1002, 18, 'Иванов', 'Иван', 'Иванович'),
(1003, 54, 'Петров', 'Петр', 'Петрович'),
(1004, 68, 'Сидоров', 'Сидор', 'Сидорович');

--
-- Индексы сохранённых таблиц
--

--
-- Индексы таблицы `cataloghyman`
--
ALTER TABLE `cataloghyman`
  ADD PRIMARY KEY (`idhuman`);

--
-- AUTO_INCREMENT для сохранённых таблиц
--

--
-- AUTO_INCREMENT для таблицы `cataloghyman`
--
ALTER TABLE `cataloghyman`
  MODIFY `idhuman` int(11) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1005;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
