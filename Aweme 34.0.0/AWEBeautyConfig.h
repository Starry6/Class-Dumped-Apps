@interface AWEBeautyConfig : NSObject
@property (nonatomic) AWEBeautySceneConfig sceneConfig;
@property (nonatomic) AWEBeautyViewConfig viewConfig;
- (id)sceneConfig;
- (void)setSceneConfig:;
- (id)viewConfig;
- (void)setViewConfig:;
- (id)initWithSceneConfig:viewConfig:;
- (void).cxx_destruct;
@end
