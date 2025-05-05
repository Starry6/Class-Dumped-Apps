@interface GeometricCutTools : NSObject
+ (id)cleanTextDetectorOutput:;
+ (id)findCorrectedBoundingBoxOfTextFeature:inImageWithSize:;
+ (BOOL)isPointArrayARectangle:;
+ (BOOL)lineThroughPoint:andPoint:andLineThroughPoint:andPoint:intersectAt:;
+ (BOOL)lineThroughPoint:andPoint:andSegmentStartingAt:andEndingAt:intersectAt:;
+ (BOOL)lineThroughPoint:andPoint:andRectangle:intersectAtPoint:andPoint:;
+ (BOOL)lineThroughPoint:andPoint:andImageWithSize:intersectAtPoint:andPoint:;
+ (id)widestVersionOfRect:insideImageWithSize:;
+ (id)boxInNormalizedSpace:toImageSpaceWithSize:plusPadding:destSize:networkInputSize:;
+ (BOOL)derotateContentsOf:inImage:andOutputTo:withPadding:networkInputSize:;
+ (id)stringByInjectingSpaces:textFeatures:improved:;
+ (id)geometricRecognitionOf:inDerotatedRegion:withPadding:fromCorrectedBoundingBox:inImageWithSize:withNetwork:activations:invert:;
+ (id)geometricRecognitionOf:inDerotatedRegion:withPadding:fromCorrectedBoundingBox:inImageWithSize:withCodeMap:activations:invert:networkInputSize:;
+ (id)geometricRecognitionOf:inDerotatedRegion:withPadding:fromCorrectedBoundingBox:inImageWithSize:withNetwork:activations:invert:garbageSymbol:;
+ (id)geometricRecognitionOf:inDerotatedRegion:withPadding:fromCorrectedBoundingBox:inImageWithSize:withCodeMap:activations:invert:networkInputSize:garbageSymbol:;
+ (id)geometricRecognitionCandidatesOf:inDerotatedRegion:withPadding:fromCorrectedBoundingBox:inImageWithSize:withNetwork:activations:invert:recognitionWindowSize:;
@end
