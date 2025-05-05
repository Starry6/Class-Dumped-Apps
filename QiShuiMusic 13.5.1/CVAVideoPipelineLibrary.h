@interface CVAVideoPipelineLibrary : NSObject
+ (id)colorCubeRequest:isMono:error:;
+ (id)stageLightPortraitRequestWithMattingRequest:destinationColorPixelBuffer:proxyCubeData:cubeData:vignetteIntensity:stageLightIntensity:;
+ (int)prewarm;
+ (id)disparityPostprocessingVideoPipelineWithProperties:error:;
+ (id)syntheticDepthOfFieldPortraitRequestWithMattingRequest:destinationColorPixelBuffer:backgroundColorCube:foregroundColorCube:colorCubeIntensity:simulatedFocalRatio:sourceColorGain:sourceColorLux:;
+ (id)opaqueBackgroundRequestWithMattingRequest:error:;
+ (id)stageLightPortraitRequestWithMattingRequest:destinationColorPixelBuffer:proxyCubeData:cubeData:;
+ (id)portraitRequestWithBackground:light:post:error:;
+ (id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:simulatedFocalRatio:sourceColorGain:sourceColorLux:metadata:error:;
+ (id)mattingVideoPipelineWithProperties:error:;
+ (id)colorCubePortraitRequestForPortraitVideoPipeline:withWithSourceColorPixelBuffer:destinationColorPixelBuffer:cubeData:;
+ (id)contourLightRequestWithFace:error:;
+ (id)contourLightRequestWithFace:relightStyleStrength:error:;
+ (id)disparityPostprocessingVideoPipelineWithProperties:;
+ (id)videoPipelinePropertiesForDevice:;
+ (id)colorCubePortraitGenericRequestForPortraitVideoPipeline:sourceColorPixelBuffer:cubeData:error:;
+ (id)portraitVideoPipelineWithProperties:error:;
+ (id)studioLightRequestWithFace:error:;
+ (id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:simulatedFocalRatio:sourceColorGain:sourceColorLux:error:;
+ (id)colorCubeRequestWithBackgroundCube:foregroundCube:error:;
+ (id)sourceImageRequest:error:;
+ (id)studioLightRequestWithFace:relightStyleStrength:error:;
+ (id)portraitVideoPipelineWithProperties:;
+ (id)mattingVideoPipelineWithProperties:;
@end
