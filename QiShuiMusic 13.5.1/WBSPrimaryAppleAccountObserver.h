@interface WBSPrimaryAppleAccountObserver : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accountWasAdded:;
- (id)init;
- (void)_setAccountOnInternalQueue:;
- (void)accountWasModified:;
- (void)accountWasRemoved:;
- (void).cxx_destruct;
- (void)_registerForUpdates;
- (void)getPrimaryAppleAccountWithCompletionHandler:;
- (void)getPrimaryAppleAccountAltDSIDWithCompletionHandler:;
- (void)getPrimaryAppleAccountHasSafariSyncEnabledWithCompletionHandler:;
- (void)_setAccountIfPrimary:;
+ (id)sharedObserver;
@end
