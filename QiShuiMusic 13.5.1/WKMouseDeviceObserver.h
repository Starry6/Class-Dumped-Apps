@interface WKMouseDeviceObserver : NSObject
@property (nonatomic) BOOL hasMouseDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)startWithCompletionHandler:;
- (void)start;
- (void)stop;
- (void)stopWithCompletionHandler:;
- (void).cxx_destruct;
- (void)mousePointerDevicesDidChange:;
- (id).cxx_construct;
- (void)_setHasMouseDeviceForTesting:;
- (BOOL)hasMouseDevice;
+ (id)sharedInstance;
@end
