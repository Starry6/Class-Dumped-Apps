@interface HTSLiveLinkmicGameInfo : IESLivePBBaseMessage
@property (nonatomic) q playId;
@property (nonatomic) NSString gameId;
@property (nonatomic) NSString gameCategory;
+ (id)descriptor;
@end
