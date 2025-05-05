@interface TTVideoEngineStrategyScene : NSObject
@property (nonatomic) NSString sceneId;
@property (nonatomic) NSString briefSceneId;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL muted;
@property (nonatomic) q maxVisibleCardCnt;
@property (nonatomic) NSString configString;
- (id)briefSceneId;
- (id)initWithSceneId:;
- (long long)maxVisibleCardCnt;
- (void)setBriefSceneId:;
- (void)setConfigString:;
- (void)setMaxVisibleCardCnt:;
- (BOOL)muted;
- (void)setMuted:;
- (void).cxx_destruct;
- (id)toJsonString;
- (id)sceneId;
- (void)setSceneId:;
- (BOOL)autoPlay;
- (void)setAutoPlay:;
- (id)configString;
+ (id)scene:;
@end
