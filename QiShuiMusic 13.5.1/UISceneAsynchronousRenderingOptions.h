@interface UISceneAsynchronousRenderingOptions : NSObject
@property (nonatomic) NSArray renderTimes;
@property (nonatomic) double renderPeriod;
@property (nonatomic) float renderMaxAPL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (double)renderPeriod;
- (float)renderMaxAPL;
- (id)initWithOptions:;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)renderTimes;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
@end
