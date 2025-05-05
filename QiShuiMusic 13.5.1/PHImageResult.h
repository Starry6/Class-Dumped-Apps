@interface PHImageResult : PHCompositeMediaResult
@property (nonatomic) NSNumber exifOrientation;
@property (nonatomic) NSString uniformTypeIdentifier;
- (id)exifOrientation;
- (void)setImageData:;
- (void)setImageRef:;
- (void)setExifOrientation:;
- (void)dealloc;
- (BOOL)isPlaceholder;
- (void)setUniformTypeIdentifier:;
- (id)uniformTypeIdentifier;
- (id)imageData;
- (void)setIsPlaceholder:;
- (id)sanitizedInfoDictionary;
- (id)imageRef;
- (BOOL)containsValidData;
- (void).cxx_destruct;
- (id)allowedInfoKeys;
- (void)setDegraded:;
- (BOOL)isDegraded;
- (void)setHighDynamicRangeGainMap:orientation:averagePixelLuminance:;
- (long long)uiOrientation;
- (void)setImageURL:;
- (id)imageURL;
@end
