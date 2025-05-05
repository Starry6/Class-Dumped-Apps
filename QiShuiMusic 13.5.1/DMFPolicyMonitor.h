@interface DMFPolicyMonitor : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSInteger firstUnlockToken;
@property (nonatomic) NSObject<OS_dispatch_queue> firstUnlockQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> registrationCallbackQueue;
@property (nonatomic) NSMutableDictionary notificationTokensByPolicyMonitorIdentifier;
@property (nonatomic) NSMutableArray pendingRequests;
- (id)notificationTokensByPolicyMonitorIdentifier;
- (id)init;
- (void)dealloc;
- (id)initWithXPCConnection:;
- (void)_dispatchRequest:;
- (id)firstUnlockQueue;
- (int)firstUnlockToken;
- (id)registrationCallbackQueue;
- (void)invalidatePolicyMonitor:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)pendingRequests;
- (void)requestPoliciesForTypes:completionHandler:;
- (id)requestPoliciesForTypes:withError:;
- (void)addRegistration:forPolicyMonitorIdentifier:completionHandler:;
+ (id)remoteInterface;
+ (id)policyMonitor;
+ (id)mobileKeyBagFirstUnlockNotificationName;
+ (BOOL)hasFirstUnlocked;
@end
