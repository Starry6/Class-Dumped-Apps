@interface TXROptions : NSObject
@property (nonatomic) BOOL cubemapFromVerticallyStackedImage;
@property (nonatomic) Q originOperation;
@property (nonatomic) Q colorSpaceHandling;
@property (nonatomic) BOOL multiplyAlpha;
- (id)copyWithZone:;
- (void)setColorSpaceHandling:;
- (void)setMultiplyAlpha:;
- (void)setOriginOperation:;
- (BOOL)cubemapFromVerticallyStackedImage;
- (void)setCubemapFromVerticallyStackedImage:;
- (unsigned long long)originOperation;
- (unsigned long long)colorSpaceHandling;
- (BOOL)multiplyAlpha;
@end
