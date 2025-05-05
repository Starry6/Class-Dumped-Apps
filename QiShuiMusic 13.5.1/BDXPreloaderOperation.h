@interface BDXPreloaderOperation : NSOperation
@property (nonatomic) NSString bulletSchema;
@property (nonatomic) BDXRLPreloadItemConfig preloadItemConfig;
@property (nonatomic) BDXResourceLoaderTaskConfig taskConfig;
- (id)bulletSchema;
- (id)initWith:preloadItemConfig:taskConfig:;
- (id)preloadItemConfig;
- (void)setBulletSchema:;
- (void)setPreloadItemConfig:;
- (void)setTaskConfig:;
- (id)taskConfig;
- (void)cancel;
- (void)main;
- (void).cxx_destruct;
@end
