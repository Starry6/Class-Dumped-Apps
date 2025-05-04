@interface AWEACCWebImageImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)animatedImageView;
+ (void)imageView:setImageWithURLArray:placeholder:completion:;
+ (void)requestImageWithURLArray:completion:;
+ (void)imageView:setImageWithURLArray:;
+ (void)button:setImageWithURLArray:forState:placeholder:completion:;
+ (void)imageView:setImageWithURLArray:placeholder:;
+ (void)cancelImageViewRequest:;
+ (BOOL)enableUseACCWebImage;
+ (void)requestImageWithURLArray:cacheName:completion:;
+ (void)imageView:setImageWithURLArray:placeholder:options:completion:;
+ (void)imageView:setImageWithURLArray:options:;
+ (void)imageView:setImageWithURL:options:;
+ (void)imageView:setImageWithURLArray:placeholder:progress:postProcess:completion:;
+ (void)imageView:setImageWithURLArray:options:postProcess:;
+ (void)imageView:setImageWithURLArray:options:sizeLimit:;
+ (void)imageView:setImageWithURLArray:placeholder:cacheName:options:sizeLimit:progress:postProcess:transformer:completion:;
+ (BOOL)enableUseACCNewOptions;
@end
