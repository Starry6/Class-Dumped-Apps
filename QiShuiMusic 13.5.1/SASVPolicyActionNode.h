@interface SASVPolicyActionNode : AceObject
@property (nonatomic) NSArray children;
@property (nonatomic) NSString confirmationType;
@property (nonatomic) NSString name;
@property (nonatomic) SASVSpeechMetadata speechMetadata;
@property (nonatomic) NSString type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (void)setType:;
- (id)children;
- (void)setChildren:;
- (id)type;
- (id)encodedClassName;
- (id)name;
- (id)confirmationType;
- (void)setConfirmationType:;
- (id)speechMetadata;
- (void)setSpeechMetadata:;
+ (id)policyActionNode;
+ (id)policyActionNodeWithDictionary:context:;
@end
