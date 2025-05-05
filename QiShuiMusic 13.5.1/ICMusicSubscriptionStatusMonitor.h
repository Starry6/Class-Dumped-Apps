@interface ICMusicSubscriptionStatusMonitor : NSObject
@property (nonatomic) ICUserIdentity identity;
@property (nonatomic) ICMusicSubscriptionStatus subscriptionStatus;
- (id)subscriptionStatus;
- (void)_requestSubscriptionStatusWithCachingPolicy:completion:;
- (id)identity;
- (void)dealloc;
- (void)_endObservingSubscriptionStatus;
- (void)refreshSubscriptionStatus;
- (void)_handleUserIdentityStoreDidChange:;
- (void)_handleSubscriptionStatusDidChange:;
- (void)_handleActiveUserIdentityDidChangeRemoteNotification;
- (id)_effectiveIdentityForRequestingSubscriptionStatus;
- (void)_beginObservingSubscriptionStatus;
- (void)_updateWithSubscriptionStatus:;
- (BOOL)_isMonitoringSubscriptionStatusForAutoupdatingIdentity;
- (void).cxx_destruct;
- (id)_initWithIdentityContext:;
- (id)description;
- (id)beginObservingSubscriptionStatusWithHandler:;
- (void)endObservingSubscriptionStatusWithToken:;
+ (id)_sharedInstanceManager;
+ (id)sharedMonitorForIdentity:identityStore:;
+ (id)sharedMonitorForIdentity:;
@end
