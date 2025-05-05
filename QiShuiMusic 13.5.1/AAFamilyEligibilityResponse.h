@interface AAFamilyEligibilityResponse : AAResponse
@property (nonatomic) BOOL eligible;
@property (nonatomic) q eligibilityStatus;
@property (nonatomic) BOOL hasPendingInvites;
@property (nonatomic) NSArray familyFeaturePrimaryDescriptions;
@property (nonatomic) NSArray familyFeatureSecondaryDescriptions;
@property (nonatomic) NSString familyFeatureSecondaryTitle;
@property (nonatomic) NSString underageEligibilityAlertTitle;
@property (nonatomic) NSString underageEligibilityAlertMessage;
- (id)familyFeatureSecondaryTitle;
- (id)underageEligibilityAlertMessage;
- (long long)eligibilityStatus;
- (id)familyFeaturePrimaryDescriptions;
- (id)initWithHTTPResponse:data:;
- (BOOL)hasPendingInvites;
- (void).cxx_destruct;
- (id)familyFeatureSecondaryDescriptions;
- (BOOL)eligible;
- (id)underageEligibilityAlertTitle;
@end
