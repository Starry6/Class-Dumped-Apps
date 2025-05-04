@interface AWENormalModeTabBarGeneralButtonLoadingModel : NSObject
@property (nonatomic) UIImageView imageView;
@property (nonatomic) CABasicAnimation spinAnim;
@property (nonatomic) BOOL enableRefresh;
@property (nonatomic) q status;
- (BOOL)enableRefresh;
- (void)setEnableRefresh:;
- (void)hideSpinAnimation;
- (void)showSpinAnimation;
- (void)setSpinAnim:;
- (id)spinAnim;
- (id)init;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (void)setImageView:;
- (id)imageView;
@end
