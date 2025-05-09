@interface MAMsuDownloadOptions : MADownloadOptions
@property (nonatomic) NSString requestedProductVersion;
@property (nonatomic) q delayPeriod;
@property (nonatomic) BOOL supervised;
@property (nonatomic) BOOL allowSameVersion;
@property (nonatomic) NSString prerequisiteBuildVersion;
@property (nonatomic) NSString prerequisiteProductVersion;
@property (nonatomic) NSString prerequisiteReleaseType;
@property (nonatomic) BOOL prerequisiteReleaseTypeIsOverridden;
@property (nonatomic) NSString liveAssetAudienceUUID;
@property (nonatomic) NSString purpose;
- (id)initWithPlist:;
- (void)setPurpose:;
- (id)encodeAsPlist;
- (id)requestedProductVersion;
- (id)init;
- (void)setPrerequisiteReleaseTypeIsOverridden:;
- (id)purpose;
- (void)setPrerequisiteProductVersion:;
- (BOOL)supervised;
- (void)setLiveAssetAudienceUUID:;
- (BOOL)allowSameVersion;
- (id)initWithCoder:;
- (long long)delayPeriod;
- (BOOL)prerequisiteReleaseTypeIsOverridden;
- (void)setAllowSameVersion:;
- (void)encodeWithCoder:;
- (id)liveAssetAudienceUUID;
- (void)setSupervised:;
- (id)prerequisiteProductVersion;
- (id)prerequisiteReleaseType;
- (id)prerequisiteBuildVersion;
- (void)setPrerequisiteReleaseType:;
- (void).cxx_destruct;
- (void)setDelayPeriod:;
- (id)description;
- (void)setPrerequisiteBuildVersion:;
- (void)setRequestedProductVersion:;
+ (BOOL)supportsSecureCoding;
@end
