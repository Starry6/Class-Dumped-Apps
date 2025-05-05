@interface CPNowPlayingImageButton : CPNowPlayingButton
@property (nonatomic) CPImageSet imageSet;
@property (nonatomic) UIImage image;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)image;
- (id)imageSet;
- (void)setImageSet:;
- (id)initWithImage:handler:;
+ (BOOL)supportsSecureCoding;
@end
