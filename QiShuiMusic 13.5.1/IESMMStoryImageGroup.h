@interface IESMMStoryImageGroup : HTSGLFilterGroup
@property (nonatomic) HTSGLPicture sourceImageFilter;
@property (nonatomic) UIImage image;
@property (nonatomic) {CGSize=dd} storyImageSize;
- (id)initWithImage:backVideoSize:context:;
- (void)reprocessSourceImage;
- (void)setSourceImageFilter:;
- (void)setStoryImageSize:;
- (id)sourceImageFilter;
- (id)storyImageSize;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
@end
