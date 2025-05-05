@interface ICLAppRecord : ICLPlaceholderRecord
@property (nonatomic) NSURL parallelPlaceholderURL;
@property (nonatomic) BOOL isUpdatedSystemApp;
@property (nonatomic) NSArray driverKitExtensionURLs;
@property (nonatomic) NSArray stashedVersions;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)legacyRecordDictionary;
- (id)initWithLegacyRecordDictionary:;
- (id)parallelPlaceholderURL;
- (void)setParallelPlaceholderURL:;
- (BOOL)isUpdatedSystemApp;
- (void)setIsUpdatedSystemApp:;
- (id)driverKitExtensionURLs;
- (void)setDriverKitExtensionURLs:;
- (id)stashedVersions;
- (void)setStashedVersions:;
+ (BOOL)supportsSecureCoding;
@end
