@interface PLPrivacy : NSObject
@property (nonatomic) BOOL hasHandledLimitedLibraryReprompt;
@property (nonatomic) BOOL limitedLibrarySupported;
- (BOOL)hasHandledLimitedLibraryReprompt;
- (id)init;
- (void)setHasHandledLimitedLibraryReprompt:;
- (void)requestLimitedLibraryPromptForApplicationIdentifier:;
- (id)photosPickerPresentedLibraryLogForClient:;
- (void)_isPhotosAccessAllowedWithScope:promptIfUnknown:synchronous:resultHandler:;
- (long long)photosAccessAllowedWithScope:;
- (long long)checkPhotosAccessAllowedWithScope:;
- (void)_setAuthStatus:scope:;
- (void)_checkAuthStatusForPhotosAccessScope:promptIfUnknown:resultHandler:;
- (void)logPhotosAccessWithSelfAuditToken;
- (void)logPhotosAccessWithClientAuthorization:;
- (id)photosPickerPresentedLibraryLogsByClient;
- (void)logPhotosAccessWithPhotoPickerClientIdentification:;
- (void)setLimitedLibrarySupported:;
- (void).cxx_destruct;
- (void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
- (void)_resolvePreflightStatusForScope:;
- (void)logPhotosPickerPresentedLibraryForClient:;
- (BOOL)isLimitedLibrarySupported;
- (long long)_authStatusForScope:;
- (void)checkPhotosAccessAllowedWithScope:handler:;
- (long long)photosAccessAllowedWithScope:auditToken:clientAuthorization:;
+ (BOOL)_isLimitedLibrarySupportedInClient;
+ (id)sharedInstance;
+ (id)_logDictionaryFromPhotosPickerClientLogFile:;
@end
