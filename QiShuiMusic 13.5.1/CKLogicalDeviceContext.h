@interface CKLogicalDeviceContext : NSObject
@property (nonatomic) CKLogicalDeviceScopedDaemonProxy deviceScopedDaemonProxy;
@property (nonatomic) CKLogicalDeviceScopedStateManager deviceScopedStateManager;
@property (nonatomic) CKThrottleManager throttleManager;
@property (nonatomic) <CKTestDevice> testDeviceProtocol;
@property (nonatomic) <CKTestDeviceReference> testDeviceReferenceProtocol;
@property (nonatomic) CKTestDeviceReference testDeviceReference;
@property (nonatomic) q pushBehavior;
- (id)_initWithTestDeviceReferenceProtocol:;
- (id)throttleManager;
- (id)deviceScopedStateManager;
- (void)setDeviceScopedStateManager:;
- (void)setTestDeviceProtocol:;
- (void)setThrottleManager:;
- (void).cxx_destruct;
- (id)deviceScopedDaemonProxy;
- (void)setDeviceScopedDaemonProxy:;
- (id)deviceScopedPushTopic:;
- (id)testDeviceReferenceProtocol;
- (id)testDeviceProtocol;
- (id)testDeviceReference;
- (long long)pushBehavior;
+ (id)deviceContextForTestDeviceReference:;
+ (id)deviceContextForTestDeviceReferenceProtocol:;
+ (id)defaultContext;
@end
