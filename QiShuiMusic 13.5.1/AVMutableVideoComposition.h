@interface AVMutableVideoComposition : AVVideoComposition
@property (nonatomic) NSArray _sourceSampleDataTrackIDs;
@property (nonatomic) # customVideoCompositorClass;
@property (nonatomic) {?=qiIq} frameDuration;
@property (nonatomic) NSInteger sourceTrackIDForFrameTiming;
@property (nonatomic) {CGSize=dd} renderSize;
@property (nonatomic) float renderScale;
@property (nonatomic) NSArray instructions;
@property (nonatomic) AVVideoCompositionCoreAnimationTool animationTool;
@property (nonatomic) NSArray sourceSampleDataTrackIDs;
- (id)buildSplitDuetCompositionForV2:trackInfo:videoData:;
- (id)getCIImageWithRequest:infos:context:outputSize:currentUseInfo:currentImage:affineFilter:blendFilter:;
- (id)getTransFormWithMode:;
- (BOOL)videoAndPicComposition:mediaInfo:volumeTimeDIct:trackInfo:;
- (BOOL)videoAndPicComposition:mediaInfo:volumeTimeDIct:trackInfo:context:;
- (id)_sourceSampleDataTrackIDs;
- (void)set_sourceSampleDataTrackIDs:;
- (id)renderSize;
- (id)instructions;
- (void)setInstructions:;
- (id)builtInCompositorName;
- (id)frameDuration;
- (int)sourceTrackIDForFrameTiming;
- (float)renderScale;
- (id)colorPrimaries;
- (id)colorYCbCrMatrix;
- (id)colorTransferFunction;
- (id)animationTool;
- (void)setBuiltInCompositorName:;
- (Class)customVideoCompositorClass;
- (void)setCustomVideoCompositorClass:;
- (void)setFrameDuration:;
- (void)setSourceTrackIDForFrameTiming:;
- (void)setRenderSize:;
- (void)setRenderScale:;
- (void)setAnimationTool:;
- (id)sourceSampleDataTrackIDs;
- (void)setSourceSampleDataTrackIDs:;
- (void)setColorPrimaries:;
- (void)setColorYCbCrMatrix:;
- (void)setColorTransferFunction:;
+ (id)buildSplitDuetCompositionFor:trackInfo:videoData:;
+ (unsigned long long)degressFromVideoAsset:degress:;
+ (float)getDegreeFromRotateMode1:;
+ (float)getDegreeFromRotateMode2:;
+ (float)getDegreeFromRotateMode:;
+ (id)getPixelAspectRatio:;
+ (id)getScaleInfo:andOutput:aspectFit:;
+ (id)getTransform:transformInfo:rect:;
+ (unsigned long long)rotationMode:AddRotation:;
+ (id)videoComposition;
+ (id)videoCompositionWithPropertiesOfAsset:;
+ (void)videoCompositionWithPropertiesOfAsset:completionHandler:;
+ (id)videoCompositionWithPropertiesOfAsset:videoGravity:;
+ (id)videoCompositionWithAsset:applyingCIFiltersWithHandler:;
+ (void)videoCompositionWithAsset:applyingCIFiltersWithHandler:completionHandler:;
+ (id)videoCompositionWithPropertiesOfAsset:prototypeInstruction:;
+ (void)videoCompositionWithPropertiesOfAsset:prototypeInstruction:completionHandler:;
@end
