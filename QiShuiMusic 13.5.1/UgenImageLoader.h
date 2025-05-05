@interface UgenImageLoader : NSObject
+ (void)adapter_loadImageWithUrl:imageView:completed:;
+ (Class)imageViewClassWithUrl:;
+ (void)ugenLoadGifImageWithUrl:imageView:completed:;
+ (void)ugenLoadImageWithUrl:imageView:completed:;
@end
