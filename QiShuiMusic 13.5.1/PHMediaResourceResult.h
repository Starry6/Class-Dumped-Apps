@interface PHMediaResourceResult : PHCompositeMediaResult
@property (nonatomic) NSData assetResourceData;
@property (nonatomic) NSURL assetResourceFileURL;
- (id)exifOrientation;
- (id)videoURL;
- (id)uniformTypeIdentifier;
- (id)sanitizedInfoDictionary;
- (BOOL)containsValidData;
- (void).cxx_destruct;
- (id)allowedInfoKeys;
- (id)imageURL;
- (id)adjustmentData;
- (id)mediaMetadata;
- (id)initWithRequestID:assetResource:;
- (id)assetResourceData;
- (void)setAssetResourceData:;
- (id)assetResourceFileURL;
- (void)setAssetResourceFileURL:;
@end
