# Write your MySQL query statement below
SELECT r.contest_id, ROUND(
    (COUNT(r.user_id)*100) / (SELECT COUNT(*) FROM Users), 2) AS percentage
FROM Users u, Register r
WHERE u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;


-- SELECT contest_id,
-- ROUND(COUNT(DISTINCT user_id) * 100 / (SELECT COUNT(user_id) FROM Users), 2) as percentage
-- FROM Register
-- GROUP BY contest_id
-- ORDER BY percentage desc, contest_id