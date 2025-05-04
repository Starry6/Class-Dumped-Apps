@interface AWECreativeInspirationServiceImpl : NSObject
@property (nonatomic) AWERecordInspirationServiceImpl inspirationService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enterInspirationFeedWithDataProvider:publishModel:;
- (void)enterOldTemplateFeedWithDataProvider:publishModel:;
- (void)inspirationCardFlowShootWithDetail:categoryItem:detailIndex:clickEvent:;
- (void)inspirationFeedClickTakeFlowAweme:trackPassInfoDict:;
- (void)inspirationFeedClickFriendLoraAweme:trackPassInfoDict:;
- (void)onInspirationBottomKeyWordModifyButtonClick:trackPassInfoDict:;
- (void)clearInspirationAndManagerCacheProfileModel:completion:;
- (void)setInspirationService:;
- (id)inspirationService;
- (void).cxx_destruct;
@end
