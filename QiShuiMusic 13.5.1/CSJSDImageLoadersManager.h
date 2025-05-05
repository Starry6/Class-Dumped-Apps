@interface CSJSDImageLoadersManager : NSObject
@property (nonatomic) NSMutableArray imageLoaders;
@property (nonatomic) NSArray loaders;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLoader:;
- (BOOL)canRequestImageForURL:;
- (BOOL)canRequestImageForURL:options:context:;
- (void)removeLoader:;
- (id)requestImageWithURL:options:context:progress:completed:;
- (void)setImageLoaders:;
- (BOOL)shouldBlockFailedURLWithURL:error:;
- (id)init;
- (void).cxx_destruct;
- (id)imageLoaders;
- (id)loaders;
- (void)setLoaders:;
+ (id)sharedManager;
@end
