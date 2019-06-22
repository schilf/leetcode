SELECT 
    Score,
    (SELECT 
            COUNT(DISTINCT T.Score)
        FROM
            Scores T
        WHERE
            T.Score > S.Score) + 1 `Rank`
FROM
    Scores S
ORDER BY Score DESC;
