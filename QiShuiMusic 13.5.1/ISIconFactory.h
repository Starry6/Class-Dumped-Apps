@interface ISIconFactory : ISIcon
- (id)initWithResourceProxy:;
- (id)initWithURL:;
- (id)initWithMIMEType:;
- (id)initWithBundleURL:type:;
- (id)initWithModelCode:;
- (id)initWithBundleIdentifier:;
- (id)initWithBundleURL:fileExtension:;
- (id)initWithApplicationExtensionBundleIdentifier:;
- (id)initWithImages:;
- (id)initWithFileExtension:;
- (id)initWithApplicationBundleIdentifier:;
- (id)_init;
- (id)initWithURL:options:;
- (id)initWithType:;
+ (id)_iconForURL:;
+ (id)_iconForURL:options:;
@end
