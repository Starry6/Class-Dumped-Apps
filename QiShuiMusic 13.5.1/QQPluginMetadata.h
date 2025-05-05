@interface QQPluginMetadata : NSObject
@property (nonatomic) NSInteger ApiVersion;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString version;
@property (nonatomic) NSDictionary iconFiles;
- (int)ApiVersion;
- (id)iconFiles;
- (void)setIconFiles:;
- (void)setApiVersion:;
- (id)init;
- (id)bundleIdentifier;
- (void)dealloc;
- (void)setScheme:;
- (id)scheme;
- (void)setVersion:;
- (id)version;
- (id)initWithCoder:;
- (void)setDisplayName:;
- (id)displayName;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
