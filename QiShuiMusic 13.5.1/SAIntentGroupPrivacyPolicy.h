@interface SAIntentGroupPrivacyPolicy : AceObject
@property (nonatomic) NSString privacyCategory;
@property (nonatomic) NSString redactionTarget;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)privacyCategory;
- (void)setPrivacyCategory:;
- (id)redactionTarget;
- (void)setRedactionTarget:;
+ (id)privacyPolicy;
+ (id)privacyPolicyWithDictionary:context:;
@end
