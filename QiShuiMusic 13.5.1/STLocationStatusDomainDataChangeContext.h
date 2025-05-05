@interface STLocationStatusDomainDataChangeContext : NSObject
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL wantsProminentIndication;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)wantsProminentIndication;
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
