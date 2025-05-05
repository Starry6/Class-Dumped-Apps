@interface CHSSessionPlatterDescriptor : CHSBaseDescriptor
@property (nonatomic) NSData activityAttributesType;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_initWithDescriptor:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)mutableCopyWithZone:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (id)initWithExtensionBundleIdentifier:containerBundleIdentifier:supportedFamilies:activityAttributesType:;
- (id)widgetForFamily:activityIdentifier:;
- (id)activityAttributesType;
+ (BOOL)supportsSecureCoding;
@end
