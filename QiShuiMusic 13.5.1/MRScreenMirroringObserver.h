@interface MRScreenMirroringObserver : NSObject
@property (nonatomic) @? callback;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) q deviceCount;
- (id)callback;
- (void)setDeviceCount:;
- (void).cxx_destruct;
- (void)_init;
- (long long)deviceCount;
- (id)queue;
- (void)_contextChangeNotification:;
- (id)initWithStateChangeCallback:;
- (void)_notifyIfNeeded;
+ (id)observerWithStateChangeCallback:;
+ (id)UIControllingObserver;
@end
