@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject
@property (nonatomic) SAIntentGroupProtobufMessage aceAppBundleInfo;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)aceAppBundleInfo;
- (void)setAceAppBundleInfo:;
+ (id)aceAppIntentPolicyAndVocab;
+ (id)aceAppIntentPolicyAndVocabWithDictionary:context:;
@end
