@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest
@property (nonatomic) FPItem item;
@property (nonatomic) QLCacheFileProviderVersionedFileIdentifier fileIdentifier;
- (id)item;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithFPItem:size:minimumDimension:scale:iconMode:;
- (id)computeContentType;
- (BOOL)shouldProvideFoldedGenericIcon;
+ (BOOL)supportsSecureCoding;
@end
