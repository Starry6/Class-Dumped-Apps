@interface CSJUgenImageHandler : UgenImageHandler
- (void)loadGifImageWithImageView:url:placeholderImage:completed:;
- (void)loadImageWithImageView:url:placeholderImage:completed:;
- (void)localGifImageDataWithName:completed:;
- (void)localImageWithImageView:name:completed:;
@end
