@interface MultipleMatches3 : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary userInfos;
@property (nonatomic) Q userInfos_Count;
@property (nonatomic) q currentMatch;
@property (nonatomic) BOOL end;
@property (nonatomic) NSString winnerOpenId;
@property (nonatomic) NSString winnerUnionId;
@property (nonatomic) NSString currentWinnerOpenId;
@property (nonatomic) NSString currentWinnerUnionId;
+ (id)descriptor;
@end
