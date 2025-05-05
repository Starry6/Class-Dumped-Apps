@interface SFWebExtensionButtonConfiguration : NSObject
@property (nonatomic) Q activeExtensionCount;
@property (nonatomic) BOOL alwaysShowMultipleExtensionsButton;
@property (nonatomic) NSArray buttons;
- (id)buttons;
- (id)initWithActiveExtensionCount:alwaysShowMultipleExtensionsButton:buttons:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)alwaysShowMultipleExtensionsButton;
- (unsigned long long)activeExtensionCount;
@end
