@interface HTSLiveGamePlayData : IESLivePBBaseMessage
@property (nonatomic) NSInteger playType;
@property (nonatomic) q playId;
@property (nonatomic) q gameId;
+ (id)descriptor;
@end
