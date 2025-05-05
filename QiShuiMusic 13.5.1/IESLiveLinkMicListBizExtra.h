@interface IESLiveLinkMicListBizExtra : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicOpenGameInfo openGame;
@property (nonatomic) BOOL hasOpenGame;
+ (id)descriptor;
@end
