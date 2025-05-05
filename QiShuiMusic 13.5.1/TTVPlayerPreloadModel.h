@interface TTVPlayerPreloadModel : NSObject
@property (nonatomic) NSString preloadScene;
@property (nonatomic) TTVideoEngineModel videoEngineModel;
@property (nonatomic) Q resolution;
- (id)preloadScene;
- (void)setPreloadScene:;
- (void)setVideoEngineModel:;
- (id)videoEngineModel;
- (void)setResolution:;
- (unsigned long long)resolution;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
