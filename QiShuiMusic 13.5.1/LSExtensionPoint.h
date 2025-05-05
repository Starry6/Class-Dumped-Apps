@interface LSExtensionPoint : _LSQueryResult
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString version;
@property (nonatomic) NSNumber platform;
@property (nonatomic) NSDictionary sdkEntry;
- (BOOL)respondsToSelector:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_initWithRecord:resolveAndDetach:;
- (id)platform;
- (void).cxx_destruct;
- (id)description;
- (id)forwardingTargetForSelector:;
- (id)sdkEntry;
- (id)copyWithZone:;
+ (id)extensionPointForIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)_synthesizedExtensionPointWithIdentifier:;
+ (id)identifierForCurrentProcess;
+ (id)extensionPointForIdentifier:platform:;
@end
