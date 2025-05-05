@interface SASVPolicyAction : AceObject
@property (nonatomic) NSString name;
@property (nonatomic) SASVPolicyActionNode policyActionRoot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)name;
- (id)policyActionRoot;
- (void)setPolicyActionRoot:;
+ (id)policyAction;
+ (id)policyActionWithDictionary:context:;
@end
