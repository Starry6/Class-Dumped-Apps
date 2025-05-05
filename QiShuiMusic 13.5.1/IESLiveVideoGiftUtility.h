@interface IESLiveVideoGiftUtility : NSObject
+ (id)loadColorFillBufferWith:device:;
+ (id)_loadTextureWithImage:device:;
+ (id)drawingImageForText:color:textSize:bold:;
+ (id)frameFromVideoSize:liveRenderSuperViewFame:resourceModel:;
+ (id)genFlexRateWithContainerRect:anchorPoint:flexPadding:contentSize:;
+ (id)genFlexVertexBuffersWithRenderSize:containerSize:rgbFrame:alphaFrame:containerRect:sourceSize:flexPadding:renderOffset:device:disableFlexX:disableFlexY:cutMode:;
+ (void)genTextureCoordinatesWithRect:containerSize:coordinates:reverse:;
+ (id)genVertexBuffersWithMaskContainer:sourceSize:sourceRenderRect:renderSize:containerSize:device:preferredSourceRenderRect:;
+ (void)genVerticesWithRect:containerSize:vertices:reverse:;
+ (id)genVideoVertexBufferWithRenderSize:containerSize:rgbFrame:alphaFrame:area:targetArea:renderOffset:device:;
+ (id)loadTextureWithImage:device:;
+ (id)multiVideoFrameFromVideoSize:liveRenderSuperViewFame:resourceModel:;
+ (id)rectForCenterFitWithSourceSize:renderSize:;
+ (id)rectForCenterFullWithSourceSize:renderSize:;
+ (void)replaceArrayElementsTo:from:size:;
+ (id)scaleLayerRatio:imgRatio:mode:;
+ (id)sizeForCenterFitWithSourceSize:renderSize:;
+ (id)sizeForCenterFullWithSourceSize:renderSize:;
+ (id)sizeWithText:font:maxSize:;
+ (id)transFrameFromRationRect:superViewFrame:;
+ (id)videoResourceRealDisplaySizeFromVideoSize:resourceModel:;
+ (BOOL)supportsHaptics;
@end
