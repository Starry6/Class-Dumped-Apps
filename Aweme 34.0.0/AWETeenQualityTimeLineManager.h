@interface AWETeenQualityTimeLineManager : NSObject
@property (nonatomic) NSMutableDictionary sceneDicts;
@property (nonatomic) double enterBackgroundTime;
- (void)setEnterBackgroundTime:;
- (double)enterBackgroundTime;
- (void)removeSceneWithKey:;
- (void)startScene:;
- (void)endScene:;
- (void)startSectionWithScene:subScene:identifier:sectionName:;
- (void)endSectionWithScene:subScene:identifier:sectionName:;
- (void)didEnterForground;
- (void)removeAllScene;
- (id)sceneDicts;
- (void)reportScene:;
- (id)p_sceneKeyWithScene:subScene:identifier:;
- (void)addPauseTime:;
- (void)setSceneDicts:;
- (void)didEnterBackground;
- (void).cxx_destruct;
+ (id)sharedInstanced;
@end
