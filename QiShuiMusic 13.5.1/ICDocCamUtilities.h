@interface ICDocCamUtilities : NSObject
+ (void)prepareForRotationIfNecessaryWithShutterButton:coodinator:;
+ (id)buttonFromCopyingValuesFromButton:;
+ (BOOL)shouldPerformCustomAnimationForTransitionCoordinator:window:;
+ (id)aspectFillSize:targetSize:;
+ (id)aspectFitSize:targetSize:;
+ (id)resizedImage:newSize:interpolationQuality:;
+ (id)resizedImage:newSize:transform:drawTransposed:interpolationQuality:;
+ (id)transformForOrientation:newSize:;
@end
