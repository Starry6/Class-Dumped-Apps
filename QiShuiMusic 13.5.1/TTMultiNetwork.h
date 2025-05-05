@interface TTMultiNetwork : NSObject
@property (nonatomic) NSMapTable mObservers;
- (void)notifyMultiNetState:currentState:;
- (void)notifyUserSpecifiedNetworkEnabled:;
- (void)registerMultiNetObserver:dispatch_queue:;
- (void)setMObservers:;
- (void)unregisterMultiNetObserver:;
- (id)init;
- (void).cxx_destruct;
- (id)mObservers;
+ (id)shareInstance;
@end
