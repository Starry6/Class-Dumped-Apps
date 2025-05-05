@interface IESLiveSaaSAudienceGamePlatformSEIAbilityImpl : NSObject
@property (nonatomic) <IESLiveSaaSAudienceGamePlatformSEIAbilityReaction> seiReaction;
- (void)setSeiReaction:;
- (id)initWithDIContext:;
- (BOOL)needToDealWithSEIInfo:;
- (id)seiReaction;
- (void)setUpSeiReceiveObserver;
- (void).cxx_destruct;
@end
