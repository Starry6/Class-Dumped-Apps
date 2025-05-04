@interface AWEPayPaymentCodeInnerPushManager : NSObject
@property (nonatomic) NSMutableDictionary proxyMap;
@property (nonatomic) BOOL notiRegistered;
- (void)onFrontierMessageReceived:;
- (BOOL)notiRegistered;
- (void)setNotiRegistered:;
- (id)proxyMap;
- (void)addObserver:msgType:callback:;
- (void)removeObserver:msgType:;
- (void)setProxyMap:;
- (void).cxx_destruct;
+ (id)manager;
@end
