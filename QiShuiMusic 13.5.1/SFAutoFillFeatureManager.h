@interface SFAutoFillFeatureManager : NSObject
@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (nonatomic) NSString preferredCredentialProviderForSaving;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:userInfo:;
- (BOOL)shouldAutoFillPasswordsFromKeychain;
- (BOOL)shouldAutoFillPasswords;
- (void)setShouldAutoFillPasswordsFromKeychain:;
- (void)_refreshCachedAutoFillRestrictionValues;
+ (id)sharedFeatureManager;
+ (id)_syncManager;
+ (void)autoFillPreferencesDidChange;
+ (BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+ (id)autoFillPreferencesDomain;
@end
