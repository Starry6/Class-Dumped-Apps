@interface IESLiveLinkMicBizExtra : IESLivePBBaseMessage
@property (nonatomic) IESLiveOpenGameConfig openGameConfig;
@property (nonatomic) BOOL hasOpenGameConfig;
+ (id)descriptor;
@end
