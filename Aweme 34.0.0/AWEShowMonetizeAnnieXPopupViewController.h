@interface AWEShowMonetizeAnnieXPopupViewController : UIViewController
@property (nonatomic) AWEShowMonetizeAnnieXCardConfig config;
@property (nonatomic) AWEShowMonetizeAnnieXCardView annieXCardView;
@property (nonatomic) NSTimer delayCloseTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didFetchedResource:error:;
- (void)monetizeAnnieXCardCallClose:;
- (void)monetizeAnnieXCardPayStatusChange:params:;
- (void)releaseDelayCloseTimer;
- (void)setAnnieXCardView:;
- (id)annieXCardView;
- (void)delayClose:;
- (void)setDelayCloseTimer:;
- (id)delayCloseTimer;
- (void)setConfig:;
- (void)close;
- (void)dealloc;
- (id)initWithConfig:;
- (id)config;
- (void)viewDidLoad;
- (id)containerID;
- (void).cxx_destruct;
+ (id)openWithConfig:completion:;
@end
