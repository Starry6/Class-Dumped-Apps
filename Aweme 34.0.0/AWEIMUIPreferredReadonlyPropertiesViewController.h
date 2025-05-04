@interface AWEIMUIPreferredReadonlyPropertiesViewController : UIViewController
@property (nonatomic) BOOL innerPrefersStatusBarHidden;
@property (nonatomic) BOOL prefersStatusBarHidden;
- (BOOL)innerPrefersStatusBarHidden;
- (void)setInnerPrefersStatusBarHidden:;
- (BOOL)prefersStatusBarHidden;
- (void)setPrefersStatusBarHidden:;
@end
