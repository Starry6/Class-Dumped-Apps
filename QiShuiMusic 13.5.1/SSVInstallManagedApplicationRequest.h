@interface SSVInstallManagedApplicationRequest : SSRequest
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSNumber externalVersionIdentifier;
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) BOOL skipDownloads;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBundleVersion:;
- (id)initWithXPCEncoding:;
- (void)setItemIdentifier:;
- (id)itemIdentifier;
- (id)bundleVersion;
- (id)bundleIdentifier;
- (id)copyXPCEncoding;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (id)externalVersionIdentifier;
- (void)setExternalVersionIdentifier:;
- (id)initWithItemIdentifer:externalVersionIdentifier:bundleIdentifier:bundleVersion:skipDownloads:;
- (BOOL)skipDownloads;
- (void)startWithResponseBlock:;
- (id)initWithItemIdentifer:externalVersionIdentifier:bundleIdentifier:bundleVersion:;
- (void)startWithDetailedResponseBlock:;
- (void)startWithMetadataResponseBlock:;
- (void)setSkipDownloads:;
@end
