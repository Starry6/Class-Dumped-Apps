@interface FBSProcessExecutionPolicy : NSObject
@property (nonatomic) FBSProcessExecutionStrategy strategy;
@property (nonatomic) NSArray provisions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategy;
- (id)provisions;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (void)setStrategy:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (void)setProvisions:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (id)policyForStrategy:withProvisions:;
@end
