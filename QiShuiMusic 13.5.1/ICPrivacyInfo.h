@interface ICPrivacyInfo : NSObject
@property (nonatomic) BOOL privacyAcknowledgementRequiredForMedia;
@property (nonatomic) BOOL privacyAcknowledgementRequiredForMusic;
- (id)init;
- (void)acknowledgePrivacyPolicyForIdentifier:completionHandler:;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:handler:;
- (BOOL)privacyAcknowledgementRequiredForMusic;
- (void)_updateForPrivacyAcknowledgementChanged;
- (BOOL)privacyAcknowledgementRequiredForBundleIdentifier:;
- (BOOL)privacyAcknowledgementRequiredForMedia;
- (void)_handleUserIdentityStoreDidChangeNotification:;
- (void).cxx_destruct;
- (BOOL)privacyAcknowledgementRequiredForIdentifier:;
- (void)endObservingPrivacyAcknowledgementForIdentifier:withToken:;
- (BOOL)_privacyAcknowledgementRequiredForIdentifier:;
+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:;
+ (id)sharedPrivacyInfo;
+ (BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:;
@end
