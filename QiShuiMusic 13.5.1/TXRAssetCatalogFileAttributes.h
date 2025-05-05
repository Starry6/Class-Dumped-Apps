@interface TXRAssetCatalogFileAttributes : NSObject
@property (nonatomic) ^{CGColorSpace=} colorSpace;
@property (nonatomic) C exifOrientation;
@property (nonatomic) Q fileFormat;
- (void)setColorSpace:;
- (unsigned char)exifOrientation;
- (id)init;
- (void)setExifOrientation:;
- (id)colorSpace;
- (unsigned long long)fileFormat;
- (void)setFileFormat:;
@end
