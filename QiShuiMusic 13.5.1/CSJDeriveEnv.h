@interface CSJDeriveEnv : NSObject
@property (nonatomic) <CSJDeriveImageLoaderProtocol> imageLoader;
- (void)registerImageLoader:;
- (id)imageLoader;
- (void).cxx_destruct;
- (void)setImageLoader:;
+ (id)shareInstance;
@end
