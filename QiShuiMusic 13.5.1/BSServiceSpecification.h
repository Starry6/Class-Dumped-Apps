@interface BSServiceSpecification : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL hiddenAtLaunch;
@property (nonatomic) BOOL derived;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identifier;
- (id)succinctDescriptionBuilder;
- (unsigned long long)hash;
- (BOOL)isHiddenAtLaunch;
- (id)optionForKey:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (BOOL)isDerived;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
@end
