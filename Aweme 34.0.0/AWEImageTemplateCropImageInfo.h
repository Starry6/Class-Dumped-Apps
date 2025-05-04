@interface AWEImageTemplateCropImageInfo : NSObject
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double scale;
@property (nonatomic) double cropImageWidth;
@property (nonatomic) double cropImageHeight;
- (double)cropImageWidth;
- (double)cropImageHeight;
- (void)setCropImageWidth:;
- (void)setCropImageHeight:;
- (double)scale;
- (void)setScale:;
- (double)offsetX;
- (double)offsetY;
- (void)setOffsetX:;
- (void)setOffsetY:;
@end
