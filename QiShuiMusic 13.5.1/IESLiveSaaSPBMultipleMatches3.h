@interface IESLiveSaaSPBMultipleMatches3 : GPBMessage
@property (nonatomic) q currentMatch;
@property (nonatomic) BOOL end;
@property (nonatomic) NSString winnerOpenId;
@property (nonatomic) NSString winnerUnionId;
@property (nonatomic) NSString currentWinnerOpenId;
@property (nonatomic) NSString currentWinnerUnionId;
+ (id)descriptor;
@end
