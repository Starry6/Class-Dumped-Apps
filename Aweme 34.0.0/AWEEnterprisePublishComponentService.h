@interface AWEEnterprisePublishComponentService : HTSService
@property (nonatomic) <AWEHttpTask> httpTask;
@property (nonatomic) AWEEnterpriseMarketingToolsCheckResponseModel marketingToolsModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)didFinishLogoutWithUid:;
- (void)setHttpTask:;
- (id)httpTask;
- (id)bubbleTools;
- (id)companyToolsBubbleContainerCell;
- (BOOL)hasMarketingToolsCheck;
- (id)accessLableText;
- (void)showSelectCompanyToolsWithTrackParams:clickFrom:;
- (void)fetchEnterpriseComponentIfNeededWithCompletion:;
- (void)addMarketingTool:completion:;
- (void)saveDouGuideInfoWithLinkType:;
- (BOOL)isBubbleToolShownBefore:;
- (void)saveShownBubbleTools:;
- (void)setMarketingToolsModel:;
- (id)marketingToolsModel;
- (void)p_updateMarketingToolsModels:;
- (id)p_selectCompanyCouponSchema;
- (void)dealloc;
- (void).cxx_destruct;
@end
