@interface UgenImageHandler : NSObject
- (void)loadGifImageWithImageView:url:placeholderImage:completed:;
- (void)loadImageWithImageView:url:placeholderImage:completed:;
- (void)localGifImageDataWithName:completed:;
- (void)localImageWithImageView:name:completed:;
@end
