@interface MSImageScalingSpecification : NSObject
@property (nonatomic) double nominalShortSideLength;
@property (nonatomic) double minimumLongSideLength;
@property (nonatomic) double maximumLongSideLength;
@property (nonatomic) NSInteger assetTypeFlags;
- (void)setAssetTypeFlags:;
- (double)scaleFactorForInputSize:;
- (void)setNominalShortSideLength:;
- (void)setMaximumLongSideLength:;
- (double)nominalShortSideLength;
- (id)description;
- (void)setMinimumLongSideLength:;
- (double)maximumLongSideLength;
- (int)assetTypeFlags;
- (double)minimumLongSideLength;
+ (id)assetsToGenerateFromImageWithInputSize:toConformToSpecifications:;
+ (id)specificationWithSharedAlbumSpecificationString:;
@end
