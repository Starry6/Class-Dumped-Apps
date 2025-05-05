@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_setState:;
- (void)dealloc;
- (void)_invalidate;
- (long long)state;
- (void).cxx_destruct;
- (void)notifyObserver:didChangeStateFrom:to:;
- (void)getStateWithCompletion:;
- (id)initWithQueue:delegate:;
- (void)notifyObserver:didReceiveNotificationWithToken:;
- (void)invalidate;
@end
