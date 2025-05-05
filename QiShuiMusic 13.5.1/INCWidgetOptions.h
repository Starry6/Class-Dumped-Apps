@interface INCWidgetOptions : NSObject
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) NSString intentType;
- (id)intentType;
- (id)extensionBundleIdentifier;
- (void).cxx_destruct;
- (void)setExtensionBundleIdentifier:;
- (void)setIntentType:;
- (id)initWithExtensionBundleIdentifier:intentType:;
@end
