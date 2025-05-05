@interface VSAssetBase : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSNumber compatibilityVersion;
@property (nonatomic) NSNumber contentVersion;
@property (nonatomic) NSString masteredVersion;
@property (nonatomic) NSNumber downloadSize;
@property (nonatomic) BOOL isPurgeable;
@property (nonatomic) q storage;
- (id)bundleIdentifier;
- (void)setCompatibilityVersion:;
- (id)compatibilityVersion;
- (void)setMasteredVersion:;
- (id)contentVersion;
- (void)setStorage:;
- (id)downloadSize;
- (id)initWithCoder:;
- (void)setContentVersion:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (long long)storage;
- (id)masteredVersion;
- (void).cxx_destruct;
- (void)setDownloadSize:;
- (BOOL)isPurgeable;
- (void)setIsPurgeable:;
+ (BOOL)supportsSecureCoding;
@end
