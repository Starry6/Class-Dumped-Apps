@interface RxCollectionLayoutDimension : NSObject
@property (nonatomic) double dimension;
@property (nonatomic) Q semantic;
@property (nonatomic) BOOL isFractionalWidth;
@property (nonatomic) BOOL isFractionalHeight;
@property (nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isEstimated;
- (void)setDimension:;
- (BOOL)isEstimated;
- (double)dimension;
- (BOOL)isFractionalWidth;
- (unsigned long long)semantic;
- (id)initWithDimension:semantic:;
- (void)setSemantic:;
- (BOOL)isAbsolute;
- (BOOL)isFractionalHeight;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)dimensionWithDimension:semantic:;
+ (id)absoluteDimension:;
+ (id)fractionalWidthDimension:;
+ (id)fractionalHeightDimension:;
+ (id)estimatedDimension:;
@end
