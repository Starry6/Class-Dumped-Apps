@interface WBSKeychainCredentialNotificationMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_notifyObservers;
- (void)dealloc;
- (void)removeObserverForToken:;
- (void).cxx_destruct;
- (void)triggerExternalNotification;
- (id)addObserverWithBlock:;
- (id)initWithCoalescingInterval:;
- (void)notifyModernKeychainUpdated;
- (void)_notifyKeychainUpdated;
- (void)_cancelCoalescingTimer;
@end
