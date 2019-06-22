SELECT 
    b.Id
FROM
    Weather f
        LEFT JOIN
    Weather b ON b.RecordDate = DATE_SUB(STR_TO_DATE(f.RecordDate, '%Y-%m-%d'),
        INTERVAL -1 DAY)
WHERE
    b.Temperature > f.Temperature;
