@interface HTSLiveMatchExtra : IESLivePBBaseMessage
@property (nonatomic) BOOL isWangzheGame;
@property (nonatomic) BOOL isWanmeiGame;
@property (nonatomic) BOOL isLolGame;
+ (id)descriptor;
@end
