@interface CPLMomentShare : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString title;
@property (nonatomic) s mode;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) q assetCount;
@property (nonatomic) q photosCount;
@property (nonatomic) q videosCount;
@property (nonatomic) NSData thumbnailImageData;
@property (nonatomic) NSData previewData;
@property (nonatomic) NSArray participants;
@property (nonatomic) NSURL shareURL;
@property (nonatomic) NSString originatingScopeIdentifier;
- (id)shareURL;
- (long long)videosCount;
- (id)startDate;
- (id)participants;
- (long long)photosCount;
- (void)setParticipants:;
- (void)setCreationDate:;
- (void)setStartDate:;
- (id)identifier;
- (void)setPhotosCount:;
- (void)setTitle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expiryDate;
- (void)setEndDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (id)title;
- (void).cxx_destruct;
- (void)setExpiryDate:;
- (id)description;
- (short)mode;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (void)setMode:;
- (id)copyWithZone:;
- (id)creationDate;
- (id)previewData;
- (long long)assetCount;
- (id)thumbnailImageData;
- (void)setThumbnailImageData:;
- (void)setShareURL:;
- (id)originatingScopeIdentifier;
- (void)setOriginatingScopeIdentifier:;
- (void)setPreviewData:;
- (void)setAssetCount:;
- (void)setVideosCount:;
- (id)initWithScopeChange:;
- (void)updateScopeChange:;
- (id)translateToScopeChangeWithScopeType:;
+ (BOOL)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:;
@end
