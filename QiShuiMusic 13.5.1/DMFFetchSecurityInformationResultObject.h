@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject
@property (nonatomic) DMFSecurityInformation securityInformation;
@property (nonatomic) NSDictionary valuesByPropertyKey;
@property (nonatomic) NSDictionary errorsByPropertyKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)securityInformation;
- (id)initWithValuesByPropertyKey:errorsByPropertyKey:;
- (id)valuesByPropertyKey;
- (id)errorsByPropertyKey;
- (id)initWithSecurityInformation:;
+ (BOOL)supportsSecureCoding;
@end
