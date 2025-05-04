@interface AWEBeautySceneConfig : NSObject
@property (nonatomic) Q sceneType;
- (BOOL)isRecordSceneType;
- (BOOL)isEditSceneType;
- (id)init;
- (unsigned long long)sceneType;
- (void)setSceneType:;
@end
