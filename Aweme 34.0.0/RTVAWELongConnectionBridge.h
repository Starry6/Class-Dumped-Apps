@interface RTVAWELongConnectionBridge : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) Q connectionState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? onMessageReceived;
- (BOOL)sendPushMessage:;
- (void)aweRTVLongConnectionStateChanged:url:;
- (void)aweRTVLongConnectionDidReceiveMsg:;
- (id)onMessageReceived;
- (void)p_handleDidReceiveLongconnectionWithMsg:;
- (void)setOnMessageReceived:;
- (id)init;
- (void)dealloc;
- (unsigned long long)connectionState;
- (void)setConnectionState:;
- (id)injector;
- (void).cxx_destruct;
@end
