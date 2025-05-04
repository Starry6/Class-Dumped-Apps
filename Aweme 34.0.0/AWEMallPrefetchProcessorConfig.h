@interface AWEMallPrefetchProcessorConfig : NSObject
@property (nonatomic) NSString prefetchKey;
@property (nonatomic) NSDictionary prefetchApiConfigMap;
@property (nonatomic) NSDictionary prefetchImagesConfigMap;
@property (nonatomic) NSString mallPrefetchImageKey;
- (id)prefetchKey;
- (void)setPrefetchKey:;
- (id)prefetchApiConfigMap;
- (void)setPrefetchApiConfigMap:;
- (id)prefetchImagesConfigMap;
- (void)setPrefetchImagesConfigMap:;
- (id)mallPrefetchImageKey;
- (void)setMallPrefetchImageKey:;
- (void).cxx_destruct;
@end
