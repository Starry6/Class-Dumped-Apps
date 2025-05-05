@interface PHMomentSharePreview : NSObject
@property (nonatomic) NSData thumbnailImageData;
@property (nonatomic) NSArray previewImageData;
@property (nonatomic) PHAsset keyAsset;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
@property (nonatomic) NSString keyAssetIdentifier;
@property (nonatomic) NSArray curatedAssetIdentifiers;
- (id)cropRect;
- (void)setCropRect:;
- (void).cxx_destruct;
- (id)description;
- (id)thumbnailImageData;
- (void)setThumbnailImageData:;
- (id)previewImageData;
- (void)setKeyAsset:;
- (id)keyAsset;
- (id)initWithThumbnailImageData:previewData:;
- (id)keyAssetIdentifier;
- (void)setPreviewImageData:;
- (id)curatedAssetIdentifiers;
- (void)setCuratedAssetIdentifiers:;
@end
