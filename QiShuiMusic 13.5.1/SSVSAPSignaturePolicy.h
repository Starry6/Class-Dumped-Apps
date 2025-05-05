@interface SSVSAPSignaturePolicy : NSObject
@property (nonatomic) q policyType;
@property (nonatomic) NSArray signatureComponents;
- (id)dataToSignWithRequestProperties:;
- (long long)policyType;
- (id)signatureComponents;
- (id)_dataToSignWithDataSource:;
- (void).cxx_destruct;
- (id)dataToSignWithURLRequest:;
- (id)initWithPolicyType:;
- (id)initWithPolicyType:signatureComponents:;
- (id)dataToSignWithURLResponse:responseData:;
- (id)initWithSignedActionsDictionary:;
- (id)copyWithZone:;
@end
