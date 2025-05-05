@interface AVVideoCompositionCoreAnimationTool : NSObject
- (void)dealloc;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (int)_auxiliaryTrackID;
- (BOOL)_hasPostProcessingLayers;
- (id)_postProcessingVideoLayers;
- (id)_postProcessingRootLayer;
- (id)initWithMagicTrackID:animationLayer:videoLayers:;
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:asTrackID:;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:inLayer:;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:inLayer:;
@end
