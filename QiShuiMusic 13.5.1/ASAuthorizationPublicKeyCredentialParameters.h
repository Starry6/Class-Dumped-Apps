@interface ASAuthorizationPublicKeyCredentialParameters : NSObject
@property (nonatomic) q algorithm;
- (long long)algorithm;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)initWithAlgorithm:;
+ (BOOL)supportsSecureCoding;
@end
