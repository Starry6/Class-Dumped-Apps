@interface IESLiveBigPartyMSequenceAudienceHostEntranceController : NSObject
@property (nonatomic) @? audienceEntranceShowHandler;
@property (nonatomic) @? audienceEntranceHideHandler;
@property (nonatomic) IESLiveIntimateChatHostApplyItemView hostEntrance;
@property (nonatomic) Q currentSocialScene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAudienceEntranceHideHandler:;
- (void)addHostEntrance;
- (void)setAudienceEntranceShowHandler:;
- (id)audienceEntranceHideHandler;
- (id)audienceEntranceShowHandler;
- (unsigned long long)currentSocialScene;
- (void)didSetAttachingDIContext;
- (id)hostEntrance;
- (id)initWithDIContext:;
- (void)registerBigPartyAudienceEntranceHideHandler:;
- (void)registerBigPartyAudienceEntranceShowHandler:;
- (void)removeHostEntrance;
- (void)setHostEntrance:;
- (void)startInteractiveWithScene:;
- (void).cxx_destruct;
@end
