@interface STFocusStatusDomainData : NSObject
@property (nonatomic) NSString modeIdentifier;
@property (nonatomic) NSString modeName;
@property (nonatomic) NSString modeSymbol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)modeIdentifier;
- (id)init;
- (id)dataByApplyingDiff:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (id)modeSymbol;
- (unsigned long long)hash;
- (id)diffFromData:;
- (void)encodeWithCoder:;
- (id)modeName;
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
