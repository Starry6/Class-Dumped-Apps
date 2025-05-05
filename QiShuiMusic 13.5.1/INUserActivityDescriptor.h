@interface INUserActivityDescriptor : INAppDescriptor
@property (nonatomic) NSString userActivityType;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:;
- (unsigned long long)hashForSmartPromptPurposes;
- (BOOL)isEqualForSmartPromptPurposes:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)userActivityType;
- (id)initWithUserActivityType:bundleIdentifier:;
- (id)initWithUserActivityType:localizedName:bundleIdentifier:extensionBundleIdentifier:counterpartIdentifiers:teamIdentifier:supportedIntents:bundleURL:;
- (id)appDescriptor;
- (id)descriptorWithAppDescriptor:;
+ (BOOL)supportsSecureCoding;
@end
