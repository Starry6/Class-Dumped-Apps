@interface BRFrameworkSyncedRootURLCache : NSObject
@property (nonatomic) NSArray syncedRootURLs;
@property (nonatomic) BOOL cacheMightBePopulated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithPersona:;
- (id)syncedRootURLs;
- (void)_accountWillChange;
- (void).cxx_destruct;
- (BOOL)cacheMightBePopulated;
- (BOOL)_checkIfPersonaStillValid;
- (void)registerForSyncedLocationsChangesNotifications;
- (void)_fetchSyncedRootURLs;
@end
