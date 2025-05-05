@interface STAirPlayStatusDomainData : NSObject
@property (nonatomic) Q airPlayState;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)bundleIdentifier;
- (id)dataByApplyingDiff:;
- (unsigned long long)airPlayState;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)diffFromData:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
