@interface INAppIntentDescriptor : INAppDescriptor
@property (nonatomic) NSString intentIdentifier;
@property (nonatomic) NSSet supportedEntities;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:;
- (unsigned long long)hashForSmartPromptPurposes;
- (BOOL)isEqualForSmartPromptPurposes:;
- (id)initWithFullyQualifiedActionIdentifier:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)intentIdentifier;
- (id)initWithIntentIdentifier:applicationRecord:;
- (id)initWithIntentIdentifier:applicationRecord:supportedAppIntents:supportedEntities:;
- (id)initWithIntentIdentifier:localizedName:bundleIdentifier:extensionBundleIdentifier:counterpartIdentifiers:teamIdentifier:supportedIntents:supportedEntities:bundleURL:documentTypes:;
- (id)supportedEntities;
+ (BOOL)supportsSecureCoding;
@end
