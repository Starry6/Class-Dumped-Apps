@interface NSCollectionLayoutDimension : NSObject
@property (nonatomic) q semantic;
@property (nonatomic) double dimension;
@property (nonatomic) BOOL isFractionalWidth;
@property (nonatomic) BOOL isFractionalHeight;
@property (nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isEstimated;
- (void)setDimension:;
- (BOOL)isEstimated;
- (double)dimension;
- (BOOL)isFractionalWidth;
- (long long)semantic;
- (id)initWithDimension:semantic:;
- (void)setSemantic:;
- (BOOL)isAbsolute;
- (BOOL)isFractionalHeight;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)absoluteDimension:;
+ (id)fractionalWidthDimension:;
+ (id)fractionalHeightDimension:;
+ (id)estimatedDimension:;
+ (id)_dimensionWithDimension:semantic:;
@end
