@interface STStatusDomainDataChangeContext : NSObject
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)isUserInitiated;
- (void)encodeWithCoder:;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
