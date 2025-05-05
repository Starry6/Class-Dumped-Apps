@interface AMSDeviceOfferRegistrationPrivacyValidator : NSObject
@property (nonatomic) ACAccount account;
- (id)account;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (BOOL)canMasterDevicePerformRegistration;
- (BOOL)isPrivacyRequirementMetForOptions:;
+ (id)_identifiersForValidationOptions:;
+ (BOOL)_isPrivacyAcknowledgementForIdentifier:satisfiedOnAccount:;
+ (BOOL)_isPrivacyAcknowledgementForIdentifiers:satisfiedOnAccount:;
+ (id)_masterEligibilityPrivacyOptionsIdentifiers;
+ (id)_minimumAcknowledgementVersionForIdentifier:;
+ (id)_privacyVersionMap;
@end
