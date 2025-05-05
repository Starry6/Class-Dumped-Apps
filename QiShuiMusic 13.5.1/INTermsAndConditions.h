@interface INTermsAndConditions : NSObject
@property (nonatomic) NSString localizedTermsAndConditionsText;
@property (nonatomic) NSURL privacyPolicyURL;
@property (nonatomic) NSURL termsAndConditionsURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localizedTermsAndConditionsText;
- (id)privacyPolicyURL;
- (id)termsAndConditionsURL;
- (id)initWithLocalizedTermsAndConditionsText:privacyPolicyURL:termsAndConditionsURL:;
+ (BOOL)supportsSecureCoding;
@end
