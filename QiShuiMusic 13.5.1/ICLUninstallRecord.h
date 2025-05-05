@interface ICLUninstallRecord : NSObject
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL hasParallelPlaceholder;
@property (nonatomic) NSDictionary legacyDictionary;
- (id)init;
- (id)bundleIdentifier;
- (BOOL)isPlaceholder;
- (void)setIsPlaceholder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasParallelPlaceholder;
- (id)legacyDictionary;
- (void)setHasParallelPlaceholder:;
+ (BOOL)supportsSecureCoding;
+ (id)uninstallRecordArrayToDictionary:;
@end
