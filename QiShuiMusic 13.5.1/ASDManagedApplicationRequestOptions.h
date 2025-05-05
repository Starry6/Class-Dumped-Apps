@interface ASDManagedApplicationRequestOptions : ASDRequestOptions
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSNumber externalVersionIdentifier;
@property (nonatomic) NSNumber itemIdentifier;
@property (nonatomic) BOOL skipDownloads;
@property (nonatomic) q requestType;
- (long long)requestType;
- (id)itemIdentifier;
- (void)setRequestType:;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (id)initWithCoder:;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)externalVersionIdentifier;
- (id)initWithItemIdentifer:externalVersionIdentifier:bundleIdentifier:bundleVersion:skipDownloads:;
- (BOOL)skipDownloads;
+ (BOOL)supportsSecureCoding;
@end
