@interface AXMCaptionDetectorNode : AXMEvaluationNode
@property (nonatomic) AXMSceneDetectorNode sceneDetector;
@property (nonatomic) NSURL overrideModelURL;
@property (nonatomic) Q overrideScaleMethod;
@property (nonatomic) Q genderStrategy;
@property (nonatomic) NSURL effectiveModelURL;
@property (nonatomic) AXImageCaptionModel effectiveCaptionModelInfo;
- (void)dealloc;
- (void)_performWithLock:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)evaluate:metrics:;
- (BOOL)requiresVisionFramework;
- (id)overrideModelURL;
- (void)setOverrideModelURL:;
- (unsigned long long)overrideScaleMethod;
- (void)setOverrideScaleMethod:;
- (unsigned long long)genderStrategy;
- (void)setGenderStrategy:;
- (id)effectiveModelURL;
- (id)effectiveCaptionModelInfo;
- (id)_withLock_modelURLForOverrideURL:;
- (id)_withLock_captionModelURLCloningAssetIfNeeded;
- (id)_withLock_cloneCaptionModelIfNeeded:;
- (BOOL)_captionModelCloningIsNeeded;
- (id)_withLock_captionHandlerCreateIfNeeded:;
- (id)_withLock_valueForOverrideScaleMethod;
- (id)_computeCaptionForPixelBuffer:orImage:captionHandler:metrics:;
- (id)sceneDetector;
- (void)setSceneDetector:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (id)preferredModelInputSize;
@end
