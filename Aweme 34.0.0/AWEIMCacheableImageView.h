@interface AWEIMCacheableImageView : BDImageView
@property (nonatomic) BDWebImageRequest bdRequest;
@property (nonatomic) AWEIMBlockOperation fileLoadOperation;
- (void)im_setImage:;
- (void)im_setImageWithFilePath:placeholder:imageBlock:completion:;
- (void)im_setImageWithURL:placeholder:options:cacheName:completion:;
- (void)im_cancelImageLoad;
- (void)im_canceBDImageLoadIfNeeded;
- (void)im_canceDiskImageLoadIfNeeded;
- (id)fileLoadOperation;
- (void)setFileLoadOperation:;
- (void)setBdRequest:;
- (id)bdRequest;
- (void)im_setImageWithURL:placeholder:options:completion:;
- (void).cxx_destruct;
@end
