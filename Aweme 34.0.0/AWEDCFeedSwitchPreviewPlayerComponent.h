@interface AWEDCFeedSwitchPreviewPlayerComponent : AWEDCFeedSwitchPreviewBaseComponent
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL clickVolumeKey;
- (void)setIsMute:;
- (id)systemVolumeDidChangeNotification;
- (void)onVolumeChangeNotification;
- (BOOL)shouldMuteOrPause;
- (BOOL)clickVolumeKey;
- (void)setClickVolumeKey:;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)applicationWillResignActive;
- (void)viewDidDisappear;
- (BOOL)isMute;
@end
