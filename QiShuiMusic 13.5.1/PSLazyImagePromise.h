@interface PSLazyImagePromise : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL imageLoaded;
- (void)loadImage;
- (void).cxx_destruct;
- (id)image;
- (BOOL)isImageLoaded;
+ (id)imagePromiseWithImagePath:;
+ (id)imagePromiseWithImageNamed:inBundle:;
+ (id)imagePromiseWithLoadBlock:;
@end
