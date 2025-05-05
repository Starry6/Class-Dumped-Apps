@interface CHSMutableAvocadoDescriptor : CHSAvocadoDescriptor
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) NSString kind;
@property (nonatomic) Q supportedFamilies;
@property (nonatomic) q widgetVisibility;
@property (nonatomic) NSString intentType;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString widgetDescription;
@property (nonatomic) NSString containerBundleIdentifier;
@property (nonatomic) NSData localeToken;
@property (nonatomic) NSString eventMachServiceName;
@property (nonatomic) BOOL transparent;
- (id)initWithCoder:;
- (id)initWithExtensionBundleIdentifier:kind:supportedFamilies:intentType:;
- (id)initWithExtensionBundleIdentifier:containerBundleIdentifier:kind:supportedFamilies:intentType:;
- (id)initWithExtensionBundleIdentifier:containerBundleIdentifier:kind:displayName:intentType:supportedSizeClasses:widgetDescription:widgetVisibility:;
@end
