@interface ByteRTCVideoEffect : NSObject
@property (nonatomic) <ByteRTCFaceDetectionObserver> faceDetectionDataDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)removeEffectNodes:;
- (int)setColorFilterIntensity:;
- (void)onFaceDetectResult:;
- (void)onExpressionDetectResult:;
- (id)initWithVideoEffect:;
- (int)setAlgoModelResourceFinder:deleter:;
- (int)initCVResource:withAlgoModelDir:;
- (int)enableVideoEffect;
- (int)disableVideoEffect;
- (id)getVideoEffectHandle;
- (int)applyStickerEffect:;
- (int)setEffectNodes:;
- (int)appendEffectNodes:;
- (int)updateEffectNode:key:value:;
- (int)enableVirtualBackground:withSource:;
- (int)disableVirtualBackground;
- (int)setVideoEffectExpressionDetect:;
- (int)registerFaceDetectionObserver:withInterval:;
- (int)enableFaceDetection:withInterval:withModelPath:;
- (int)disableFaceDetection;
- (id)faceDetectionDataDelegate;
- (void)setFaceDetectionDataDelegate:;
- (void)dealloc;
- (void).cxx_destruct;
- (int)setColorFilter:;
@end
