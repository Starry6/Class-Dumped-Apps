@interface FBSLegacySignatureValidationService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)trustStateForApplication:;
- (void).cxx_destruct;
- (id)initWithApplicationInfo:andProvisioningProfiles:isManaged:;
- (void)_initializeProfiles:;
- (id)_workQueue_expirationDateForProvisioningProfile;
- (BOOL)_workQueue_signatureNeedsExplicitUserTrust;
@end
