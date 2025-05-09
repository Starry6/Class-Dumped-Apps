@interface PHAssetCreationDerivativeContext : NSObject
@property (nonatomic) q nextAvailableThumbnailIndex;
@property (nonatomic) PLThumbnailManager thumbnailManager;
@property (nonatomic) BOOL thumbnailWriteSucceeded;
@property (nonatomic) NSString thumbnailIdentifier;
@property (nonatomic) NSURL fileURLForThumbnailFile;
@property (nonatomic) NSData originalHash;
@property (nonatomic) PLManagedAsset asset;
@property (nonatomic) NSString assetUUID;
@property (nonatomic) s assetKind;
@property (nonatomic) NSString originalUTI;
@property (nonatomic) q assetOrientation;
@property (nonatomic) {CGSize=dd} assetOrientedImageSize;
@property (nonatomic) {CGSize=dd} embeddedThumbnailSize;
@property (nonatomic) q maxPixelSize;
@property (nonatomic) NSString assetExtension;
@property (nonatomic) NSData imageData;
@property (nonatomic) NSString fullsizeRenderImagePath;
@property (nonatomic) NSString pathForOriginalFile;
@property (nonatomic) NSString pathForVideoPreviewFile;
@property (nonatomic) NSString fullsizeRenderVideoPath;
@property (nonatomic) NSArray auxiliaryImageRecords;
- (void)setImageData:;
- (id)imageData;
- (id)asset;
- (id)assetUUID;
- (id)auxiliaryImageRecords;
- (id)thumbnailIdentifier;
- (void)setThumbnailIdentifier:;
- (id)thumbnailManager;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setAssetUUID:;
- (long long)nextAvailableThumbnailIndex;
- (void)setNextAvailableThumbnailIndex:;
- (void)setThumbnailManager:;
- (BOOL)thumbnailWriteSucceeded;
- (void)setThumbnailWriteSucceeded:;
- (id)fileURLForThumbnailFile;
- (void)setFileURLForThumbnailFile:;
- (id)originalHash;
- (void)setOriginalHash:;
- (short)assetKind;
- (void)setAssetKind:;
- (id)originalUTI;
- (void)setOriginalUTI:;
- (long long)assetOrientation;
- (void)setAssetOrientation:;
- (id)assetOrientedImageSize;
- (void)setAssetOrientedImageSize:;
- (id)embeddedThumbnailSize;
- (void)setEmbeddedThumbnailSize:;
- (long long)maxPixelSize;
- (void)setMaxPixelSize:;
- (id)assetExtension;
- (void)setAssetExtension:;
- (id)fullsizeRenderImagePath;
- (void)setFullsizeRenderImagePath:;
- (id)pathForOriginalFile;
- (void)setPathForOriginalFile:;
- (id)pathForVideoPreviewFile;
- (void)setPathForVideoPreviewFile:;
- (id)fullsizeRenderVideoPath;
- (void)setFullsizeRenderVideoPath:;
- (void)setAuxiliaryImageRecords:;
@end
