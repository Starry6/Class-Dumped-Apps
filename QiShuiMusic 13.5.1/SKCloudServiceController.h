@interface SKCloudServiceController : NSObject
@property (nonatomic) BOOL _allowsPromptingForPrivacyAcknowledgement;
- (id)init;
- (void)dealloc;
- (void)requestStorefrontIdentifierWithCompletionHandler:;
- (void)requestUserTokenForDeveloperToken:completionHandler:;
- (void)requestCapabilitiesWithCompletionHandler:;
- (void).cxx_destruct;
- (void)requestStorefrontCountryCodeWithCompletionHandler:;
- (void)_setAllowsPromptingForPrivacyAcknowledgement:;
- (BOOL)_allowsPromptingForPrivacyAcknowledgement;
- (void)_handleCapabilitiesDidChangeNotification:;
- (void)_handleStorefrontCountryCodeDidChangeNotification:;
- (void)_handleStorefrontIdentifierDidChangeNotification:;
- (void)requestPersonalizationTokenForClientToken:withCompletionHandler:;
- (id)_cloudServiceStatusMonitorWithError:;
+ (long long)authorizationStatus;
+ (void)requestAuthorization:;
+ (id)_publicErrorForPrivateError:;
@end
