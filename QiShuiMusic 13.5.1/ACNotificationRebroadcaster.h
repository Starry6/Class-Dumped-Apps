@interface ACNotificationRebroadcaster : NSObject
- (id)init;
- (void)dealloc;
- (void)_endObservingAccountStoreDidChangeNotifications;
- (void)_accountStoreDidChange:;
- (void)_beginObservingAccountStoreDidChangeNotifications;
+ (id)sharedRebroadcaster;
@end
