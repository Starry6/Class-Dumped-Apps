@interface VCPClassification : NSObject
@property (nonatomic) NSString sceneId;
@property (nonatomic) float duration;
@property (nonatomic) float sumConfidence;
- (void)setDuration:;
- (void).cxx_destruct;
- (float)duration;
- (id)sceneId;
- (void)setSceneId:;
- (id)initWithSceneId:withDuration:withConfidence:;
- (float)sumConfidence;
- (void)setSumConfidence:;
@end
