@interface CSJNativeExpressRewardDrawAdViewController : UIViewController
@property (nonatomic) NSArray expressAdViews;
@property (nonatomic) CSJAdSlot slot;
@property (nonatomic) CSJMaterialMeta firstMaterial;
@property (nonatomic) <CSJNativeExpressVideoAdDelegate> rewardedVideoAd;
- (id)rewardedVideoAd;
- (id)expressAdViews;
- (id)initWithExpressAdViews:slot:rewardedVideoAd:;
- (void)setExpressAdViews:;
- (void)setRewardedVideoAd:;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)slot;
- (BOOL)prefersStatusBarHidden;
- (void)setSlot:;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)firstMaterial;
- (void)setFirstMaterial:;
@end
