@interface AWETemplateBarContext : AWEPageContext
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) BOOL shouldShowFeedBannerTips;
@property (nonatomic) <AWETemplateBarVideoInfoProtocol> videoInfoDelegate;
@property (nonatomic) AWEPlayInteractionContext interactionContext;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> interactionController;
- (id)referString;
- (void)setReferString:;
- (BOOL)shouldShowFeedBannerTips;
- (void)setShouldShowFeedBannerTips:;
- (id)videoInfoDelegate;
- (void)setVideoInfoDelegate:;
- (void)setModel:;
- (void)setInteractionController:;
- (id)model;
- (void).cxx_destruct;
- (id)interactionController;
- (id)extraInfo;
- (id)interactionContext;
- (void)setInteractionContext:;
- (void)setExtraInfo:;
@end
