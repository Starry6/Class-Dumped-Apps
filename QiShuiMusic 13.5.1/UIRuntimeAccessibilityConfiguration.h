@interface UIRuntimeAccessibilityConfiguration : NSObject
@property (nonatomic) NSString accessibilityConfigurationHint;
@property (nonatomic) NSString accessibilityConfigurationIdentifier;
@property (nonatomic) NSString accessibilityConfigurationLabel;
@property (nonatomic) NSNumber accessibilityConfigurationTraits;
@property (nonatomic) NSNumber isAccessibilityConfigurationElement;
@property (nonatomic) NSObject object;
- (void)setObject:;
- (void)applyConfiguration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)object;
- (id)initWithObject:label:hint:traits:andIsAccessibilityElement:;
- (id)initWithObject:label:identifier:hint:traits:andIsAccessibilityElement:;
- (id)accessibilityConfigurationHint;
- (void)setAccessibilityConfigurationHint:;
- (id)accessibilityConfigurationIdentifier;
- (void)setAccessibilityConfigurationIdentifier:;
- (id)accessibilityConfigurationLabel;
- (void)setAccessibilityConfigurationLabel:;
- (id)accessibilityConfigurationTraits;
- (void)setAccessibilityConfigurationTraits:;
- (id)isAccessibilityConfigurationElement;
- (void)setIsAccessibilityConfigurationElement:;
@end
