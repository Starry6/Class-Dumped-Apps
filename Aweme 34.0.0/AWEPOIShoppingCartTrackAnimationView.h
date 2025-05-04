@interface AWEPOIShoppingCartTrackAnimationView : LynxUI
@property (nonatomic) UIView animationContainerView;
@property (nonatomic) AWEPOIShoppingCartCommodityView commdityView;
- (id)commdityView;
- (double)transformPxFromDp:isNeedTrans:;
- (void)preLoadImage:withResult:;
- (void)cancelAnim:withResult:;
- (void)startAnim:withResult:;
- (void)setCommdityView:;
- (void).cxx_destruct;
- (id)animationContainerView;
- (void)setAnimationContainerView:;
- (id)createView;
+ (void)lynxLazyLoad;
+ (id)__lynx_ui_method_config__261;
+ (id)__lynx_ui_method_config__322;
+ (id)__lynx_ui_method_config__373;
@end
