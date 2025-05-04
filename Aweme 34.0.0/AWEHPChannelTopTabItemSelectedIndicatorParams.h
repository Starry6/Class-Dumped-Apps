@interface AWEHPChannelTopTabItemSelectedIndicatorParams : NSObject
@property (nonatomic) UIImage lightModeImage;
@property (nonatomic) UIImage darkModeImage;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double centerXOffset;
- (void)setDarkModeImage:;
- (void)setLightModeImage:;
- (id)lightModeImage;
- (id)darkModeImage;
- (double)centerXOffset;
- (void)setCenterXOffset:;
- (void).cxx_destruct;
- (void)setImageSize:;
- (id)imageSize;
- (id)copyWithZone:;
@end
