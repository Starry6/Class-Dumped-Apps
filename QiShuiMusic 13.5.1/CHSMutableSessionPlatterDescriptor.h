@interface CHSMutableSessionPlatterDescriptor : CHSSessionPlatterDescriptor
@property (nonatomic) NSData localeToken;
@property (nonatomic) NSString eventMachServiceName;
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) Q supportedFamilies;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString widgetDescription;
@property (nonatomic) NSString containerBundleIdentifier;
@property (nonatomic) NSData activityAttributesType;
- (void)setBackgroundStyle:;
- (void)setContainerBundleIdentifier:;
- (void)setDisplayName:;
- (void)setExtensionBundleIdentifier:;
- (id)copyWithZone:;
- (void)setWidgetDescription:;
- (void)setSupportedFamilies:;
- (void)setLocaleToken:;
- (void)setEventMachServiceName:;
- (void)setSupportsVibrantContent:;
- (void)setActivityAttributesType:;
@end
