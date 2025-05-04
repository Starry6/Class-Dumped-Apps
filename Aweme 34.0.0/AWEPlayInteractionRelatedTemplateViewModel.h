@interface AWEPlayInteractionRelatedTemplateViewModel : AWEPlayInteractionBaseViewModel
@property (nonatomic) NSDictionary templateModelExtra;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) AWEStandardClassifyBarModel templateModel;
@property (nonatomic) BOOL didDetailControllerShow;
- (id)trackParams;
- (id)p_generateCommonRequestParams;
- (void)trackBottomBarShow;
- (void)setDidDetailControllerShow:;
- (void)openTemplateDetail;
- (id)aAWEFeedRelatedTemplateElementProtocol;
- (void)trackDetailControllerShow;
- (void)trackBottomBarClick;
- (BOOL)didDetailControllerShow;
- (id)templateModelExtra;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (void)setTemplateModel:;
- (id)templateModel;
+ (Class)aAWEFeedRelatedTemplateElementProtocolClass;
@end
