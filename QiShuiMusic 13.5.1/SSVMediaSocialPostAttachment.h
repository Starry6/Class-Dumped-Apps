@interface SSVMediaSocialPostAttachment : NSObject
@property (nonatomic) NSArray artists;
@property (nonatomic) NSString albumIdentifier;
@property (nonatomic) NSString attachmentDescription;
@property (nonatomic) NSString categoryName;
@property (nonatomic) BOOL explicitContent;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString title;
@property (nonatomic) NSData assetData;
@property (nonatomic) NSURL assetURL;
@property (nonatomic) q attachmentType;
@property (nonatomic) NSString UTI;
@property (nonatomic) BOOL deletesAssetWhenFinished;
@property (nonatomic) double previewFrameTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)assetURL;
- (id)copyXPCEncoding;
- (BOOL)isExplicitContent;
- (long long)attachmentType;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setAssetURL:;
- (id)title;
- (void).cxx_destruct;
- (id)UTI;
- (id)subtitle;
- (id)copyWithZone:;
- (id)categoryName;
- (void)setCategoryName:;
- (void)setExplicitContent:;
- (id)attachmentDescription;
- (void)setAttachmentDescription:;
- (id)assetData;
- (void)setUTI:;
- (id)childAttachmentForRelationship:;
- (void)enumerateChildAttachmentsUsingBlock:;
- (void)setChildAttachment:forRelationship:;
- (id)albumIdentifier;
- (void)setAlbumIdentifier:;
- (id)artists;
- (void)setArtists:;
- (void)setAssetData:;
- (double)previewFrameTimestamp;
- (void)setPreviewFrameTimestamp:;
- (BOOL)deletesAssetWhenFinished;
- (void)setDeletesAssetWhenFinished:;
@end
