@interface APBToygerSceneEnv : NSObject
@property (nonatomic) NSString sceneCode;
@property (nonatomic) NSString sceneType;
- (id)sceneCode;
- (void)setSceneCode:;
- (void).cxx_destruct;
- (id)sceneType;
- (void)setSceneType:;
+ (id)defaultConfig;
@end
