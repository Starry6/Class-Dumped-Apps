@interface CXCallDirectoryExtension : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q state;
@property (nonatomic) q priority;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedContainingAppName;
@property (nonatomic) LSPlugInKitProxy plugInKitProxy;
@property (nonatomic) BOOL onlyExtensionInContainingApp;
- (void)setLocalizedName:;
- (void)setPriority:;
- (void)setState:;
- (id)identifier;
- (id)localizedName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (void)setIdentifier:;
- (long long)priority;
- (id)localizedContainingAppName;
- (id)plugInKitProxy;
- (BOOL)isOnlyExtensionInContainingApp;
- (void)setLocalizedContainingAppName:;
- (void)setPlugInKitProxy:;
- (void)setOnlyExtensionInContainingApp:;
+ (BOOL)supportsSecureCoding;
@end
