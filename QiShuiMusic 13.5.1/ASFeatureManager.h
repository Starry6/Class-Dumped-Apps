@interface ASFeatureManager : NSObject
@property (nonatomic) BOOL keychainSyncEnabled;
@property (nonatomic) BOOL canKeychainSyncBeEnabled;
@property (nonatomic) BOOL internalInstall;
@property (nonatomic) BOOL airDropPasswordsAvailable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accountWasAdded:;
- (BOOL)isInternalInstall;
- (BOOL)isKeychainSyncEnabled;
- (id)init;
- (void)accountWasModified:;
- (void)accountWasRemoved:;
- (void).cxx_destruct;
- (BOOL)isAirDropPasswordsAvailable;
- (void)accountCredentialChanged:;
- (BOOL)arePasskeysDisallowedForRelyingParty:;
- (BOOL)shouldUseFallbackUIForRelyingParty:;
- (BOOL)canKeychainSyncBeEnabled;
- (void)_updateAccountOnInternalQueue:;
- (void)_updateKeychainClique;
- (void)_keychainSyncingStatusMayHaveChanged;
- (BOOL)_shouldApplyPasskeyQuirks;
+ (id)sharedManager;
@end
