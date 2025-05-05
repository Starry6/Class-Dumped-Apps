@interface PHMakeResourceAvailableRequest : PHResourceRequest
@property (nonatomic) <PLResourceIdentity> resourceIdentity;
@property (nonatomic) BOOL transient;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) q downloadIntent;
@property (nonatomic) q downloadPriority;
- (void)setTransient:;
- (void)setDownloadIntent:;
- (long long)downloadPriority;
- (id)initWithCoder:;
- (long long)downloadIntent;
- (void)encodeWithCoder:;
- (BOOL)isNetworkAccessAllowed;
- (void).cxx_destruct;
- (void)setDownloadPriority:;
- (BOOL)isTransient;
- (void)setNetworkAccessAllowed:;
- (id)initWithTaskIdentifier:assetObjectID:resource:;
- (id)resourceIdentity;
+ (BOOL)supportsSecureCoding;
@end
