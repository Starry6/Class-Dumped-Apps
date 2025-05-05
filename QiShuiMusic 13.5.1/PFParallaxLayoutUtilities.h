@interface PFParallaxLayoutUtilities : NSObject
+ (BOOL)_rectIsValid:;
+ (id)facePositionLimits;
+ (id)computeLayoutWithHelper:;
+ (id)computeLayoutsWithHelper:;
+ (id)effectiveAcceptableRectForClassification:havePetFaces:sourcePreferredCropRectNormalized:sourceAcceptableCropRectNormalized:sourceFaceAreaRectNormalized:;
+ (id)effectivePreferredRectForClassification:havePetFaces:sourcePreferredCropRectNormalized:sourceAcceptableCropRectNormalized:sourceFaceAreaRectNormalized:;
+ (double)timeOverlapCheckThresholdForTopRect:isInteractive:;
+ (double)cropScoreThresholdForClassification:;
+ (BOOL)facePositionAcceptable:imageAspect:;
+ (unsigned long long)clockIntersectionFromTopRectMatteCoverage:bottomRectMatteCoverage:;
+ (id)computeInactiveAvoidingRectForVisibleRect:acceptableFrame:unsafeRect:imageSize:newVisibleRect:;
@end
