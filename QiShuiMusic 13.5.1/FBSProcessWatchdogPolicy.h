@interface FBSProcessWatchdogPolicy : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray provisions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)provisions;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)name;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)setProvisions:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)policyWithProvisions:;
+ (id)policyWithName:forProvisions:;
@end
