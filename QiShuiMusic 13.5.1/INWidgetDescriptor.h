@interface INWidgetDescriptor : NSObject
@property (nonatomic) NSString extensionBundleIdentifier;
@property (nonatomic) NSString kind;
@property (nonatomic) NSString intentClassName;
@property (nonatomic) q preferredSizeClass;
@property (nonatomic) {CGSize=dd} preferredSize;
- (id)extensionBundleIdentifier;
- (id)kind;
- (void).cxx_destruct;
- (id)description;
- (id)intentClassName;
- (id)preferredSize;
- (id)initWithExtensionBundleIdentifier:kind:intentClassName:preferredSizeClass:;
- (BOOL)supportsIntent:;
- (id)_extensionRecordWithError:;
- (long long)preferredSizeClass;
@end
