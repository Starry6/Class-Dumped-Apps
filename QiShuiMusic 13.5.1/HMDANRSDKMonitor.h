@interface HMDANRSDKMonitor : NSObject
@property (nonatomic) double timeoutInterval;
@property (nonatomic) <HMDANRSDKMonitorDelegate> delegate;
- (void)addSelfElement;
- (id)initWithANRSDKMonitorDelegate:;
- (id)initWithANRSDKMonitorDelegate:timeInterval:;
- (void)removeSelfElement;
- (void)dealloc;
- (void)start;
- (void)stop;
- (double)timeoutInterval;
- (id)delegate;
- (void).cxx_destruct;
@end
