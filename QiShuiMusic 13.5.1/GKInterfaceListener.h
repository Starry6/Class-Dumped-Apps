@interface GKInterfaceListener : NSObject
@property (nonatomic) BOOL _isWifiUp;
@property (nonatomic) BOOL _isCellUp;
@property (nonatomic) <InterfaceListenerDelegate> interfaceListenerDelegate;
- (id)init;
- (void)dealloc;
- (void)hasConnectionWithWifi:cell:;
- (BOOL)startChangeListener;
- (BOOL)stopChangeListener;
- (BOOL)startRoutingChangeListener;
- (void)stopRoutingChangeListener;
- (void)setInterfaceListenerDelegate:;
- (id)interfaceListenerDelegate;
- (BOOL)_isWifiUp;
- (void)set_isWifiUp:;
- (BOOL)_isCellUp;
- (void)set_isCellUp:;
@end
