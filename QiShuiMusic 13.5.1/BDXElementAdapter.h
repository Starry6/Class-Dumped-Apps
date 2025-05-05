@interface BDXElementAdapter : NSObject
@property (nonatomic) <BDXElementLottieDelegate> lottieDelegate;
@property (nonatomic) <BDXElementToastDelegate> toastDelegate;
@property (nonatomic) <BDXElementVolumeDelegate> volumeDelegate;
@property (nonatomic) <BDXElementLivePlayerDelegate> liveDelegate;
@property (nonatomic) <BDXElementReportDelegate> reportDelegate;
@property (nonatomic) <BDXElementNetworkDelegate> networkDelegate;
@property (nonatomic) <BDXElementMonitorDelegate> monitorDelegate;
- (id)monitorDelegate;
- (id)lottieDelegate;
- (id)reportDelegate;
- (void)setLottieDelegate:;
- (void)setMonitorDelegate:;
- (void)setReportDelegate:;
- (void)setToastDelegate:;
- (void)setVolumeDelegate:;
- (id)toastDelegate;
- (id)volumeDelegate;
- (void).cxx_destruct;
- (id)networkDelegate;
- (void)setNetworkDelegate:;
- (id)liveDelegate;
- (void)setLiveDelegate:;
+ (id)sharedInstance;
@end
