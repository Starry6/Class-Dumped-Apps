@interface FBSSignatureValidationService : NSObject
@property (nonatomic) BOOL authoritative;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (unsigned long long)trustStateForApplication:;
- (BOOL)authoritative;
- (id)_initWithMISInterfaceWrapper:;
- (unsigned long long)_validateApp:;
- (unsigned int)signatureVersionForApp:;
- (void).cxx_destruct;
- (void)_logTrustState:forApp:reason:;
- (void)setAuthoritative:;
@end
