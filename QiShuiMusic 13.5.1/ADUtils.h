@interface ADUtils : NSObject
+ (id)prioritizationAsString:;
+ (BOOL)updatePixelBufferAllocationWithNewSize:pixelFormat:pixelBuffer:;
+ (long long)scaleConvertRotateImage:rotateBy:cropBy:scaleInto:intermediateScalingBuffer:intermediateRotatingBuffer:;
+ (long long)scaleConvertRotateImage:rotateBy:cropBy:scaleInto:intermediateScalingBuffer:intermediateRotatingBuffer:useVT:;
+ (long long)convertToLevelsConfidence:confidenceOutput:confidenceLowThreshold:confidenceHighThreshold:inverseThresholds:;
+ (long long)copyModifyNormalsPixelBuffer:output:normalsRotation:;
+ (long long)postProcessDepth:depthOutput:;
+ (long long)postProcessDepth:depthOutput:inputRoi:;
+ (long long)postProcessConfidence:confidenceOutput:rawConfidenceUnits:outConfidenceUnits:confidenceLowThreshold:confidenceHighThreshold:;
+ (long long)postProcessNormals:normalsOutput:normalsRotation:;
+ (long long)postProcessWithDepth:confidence:normals:depthOutput:confidenceOutput:normalsOutput:normalsRotation:rawConfidenceUnits:outConfidenceUnits:confidenceLowThreshold:confidenceHighThreshold:;
+ (long long)warpAndFuseWithCurrDepth:prevDepth:currNormals:prevNormals:opticalFlow:alphaMap:defaultAlpha:depthOutput:normalsOutput:;
+ (long long)filterInvalidsFromFloatImage:minValue:maxValue:;
+ (long long)filterInvalidsFromFloatImage:minValue:maxValue:clampToMinMax:;
+ (id)calcRotationMatrix:;
+ (id)calcRotationAngle:;
+ (id)addAnglesToRotation:angles:;
+ (long long)warpMap:toOutput:usingOpticalFlow:;
+ (long long)warpPreviousDepth:intoCurrentDepth:previousConfidence:intoCurrentConfidence:previousNormals:intoCurrentNormals:usingOpticalFlow:;
+ (long long)fuseCurrentMap:previousMap:intoOutputMap:usingAlpha:defaultAlpha:diffThreshold:;
+ (long long)fuseCurrentDepthAndConfidenceMaps:previousDepth:currentConfidence:previousConfidence:outputDepth:outputConfidence:defaultAlpha:depthMaxDiff:;
+ (long long)fuseCurrentDepth:previousDepth:intoOutputDepth:currentConfidence:previousConfidence:intoOutputConfidence:currentNormals:previousNormals:intoOutputNormals:usingAlpha:defaultAlpha:confidenceUnits:;
+ (long long)ADReturnFromOSStatus:;
+ (void)convertRGBAFloat:toPlanar:;
+ (id)undistortedCalibrationWithSameFOV:;
@end
