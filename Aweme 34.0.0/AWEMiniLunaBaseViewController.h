@interface AWEMiniLunaBaseViewController : UIViewController
@property (nonatomic) double appearTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMiniLuna;
- (void)setAppearTimestamp:;
- (double)appearTimestamp;
- (id)musicService;
- (id)p_commonParams;
- (id)eventModel;
- (id)currentMusicModel;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)viewDidAppear:;
@end
