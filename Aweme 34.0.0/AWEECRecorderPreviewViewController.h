@interface AWEECRecorderPreviewViewController : UIViewController
@property (nonatomic) UIImageView contentView;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) TTVideoEngine videoEngine;
@property (nonatomic) AWERepoECommerceRecordModel recordModel;
- (id)recordModel;
- (void)setRecordModel:;
- (id)videoEngine;
- (void)setVideoEngine:;
- (void)addObserve;
- (void)trackWithEvent:;
- (void)playViewWillResignActive:;
- (void)playerViewDidBecomeActive:;
- (id)cameraPreviewViewFrame;
- (void)confirmButtonDidClicked:;
- (void)backButtonDidClicked:;
- (id)viewMasTop;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)contentView;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)confirmButton;
- (void)setConfirmButton:;
@end
