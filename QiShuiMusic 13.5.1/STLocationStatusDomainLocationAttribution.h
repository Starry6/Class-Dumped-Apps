@interface STLocationStatusDomainLocationAttribution : NSObject
@property (nonatomic) Q locationState;
@property (nonatomic) STActivityAttribution activityAttribution;
@property (nonatomic) Q eligibleDisplayModes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (unsigned long long)locationState;
- (id)initWithLocationState:activityAttribution:eligibleDisplayModes:;
- (id)debugDescriptionWithMultilinePrefix:;
- (void)encodeWithCoder:;
- (unsigned long long)eligibleDisplayModes;
- (id)activityAttribution;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)initWithLocationState:activityAttribution:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
