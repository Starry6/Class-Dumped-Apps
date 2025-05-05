@interface INPreferences : NSObject
@property (nonatomic) NSString _cachedSiriLanguageCode;
- (id)init;
- (void)_setCachedSiriLanguageCode:;
- (void)assertThisProcessHasSiriEntitlement;
- (void)requestSiriAuthorization:;
- (void)_verifyProcessCanDonateIntentWithName:completion:;
- (long long)_siriAuthorizationStatus;
- (void)_updateWithExtensionContext:;
- (void).cxx_destruct;
- (id)_init;
- (id)_cachedSiriLanguageCode;
- (BOOL)_weAreRunningAsAnExtension;
- (id)_siriLanguageCode;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
+ (void)requestSiriAuthorization:;
+ (void)_verifyProcessCanDonateIntentWithName:completion:;
+ (id)siriLanguageCode;
+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;
@end
