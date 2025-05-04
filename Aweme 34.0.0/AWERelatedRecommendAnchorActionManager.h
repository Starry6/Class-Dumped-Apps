@interface AWERelatedRecommendAnchorActionManager : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> interactionViewController;
- (id)referString;
- (void)setReferString:;
- (void)setInteractionViewController:;
- (void)trackAnchorViewShow;
- (void)enterGoodsDetail;
- (void)trackAnchorClick;
- (void)enterPoiDetail;
- (void)enterOpenPlatform;
- (void)enterPropDetail;
- (void)enterSkuDetail;
- (void)didTapAnchorViewWithType:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (id)interactionViewController;
- (id)commonDict;
+ (id)anchorSupportList;
@end
