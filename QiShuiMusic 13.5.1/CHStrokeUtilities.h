@interface CHStrokeUtilities : NSObject
+ (void)getAddedStrokes:removedStrokeIdentifiers:inStrokeProvider:lastGroupingResult:;
+ (id)strokeForIdentifier:inStrokeProvider:;
+ (id)strokeIdentifiersForData:withStrokeProvider:;
+ (id)encodedStrokeIdentifiers:withStrokeProvider:;
+ (void)enumeratePointsForStroke:interpolationType:resolution:usingBlock:;
+ (BOOL)isPointEnumerationSupportedForStroke:;
+ (double)durationOfStrokesInStrokeGroup:strokeProvider:;
+ (double)speedForFinalTimeRange:stroke:;
+ (double)arcLengthForStroke:;
+ (id)boundingBoxOfPoints:rotatedAroundPoint:byAngle:;
+ (id)unionStrokeBounds:usingStrokeCountLimit:reverseOrder:;
+ (id)unionStrokeBounds:aroundXPosition:usingOneSideStrokeCountLimit:;
+ (id)createDrawingForStrokes:cancellationBlock:;
+ (id)convexHullForStroke:;
+ (id)convexHullForStrokes:inDrawing:;
+ (id)convexHullForPoints:;
+ (id)enlargedConvexHull:withMargin:;
+ (double)circumferenceRatioOfCircleFittedToPoints:circleCenter:circleRadius:;
+ (double)vectorMeanWithoutOutliers:;
+ (double)lineOrientationForStrokePoints:error:;
+ (double)threePointsOrientationWithOrigin:pointA:pointB:;
+ (double)distanceFromPoint:toSegmentFromPoint:toPoint:;
+ (double)distanceFromPoint:toRectangle:;
+ (id)regularizedPathFromPoints:delta:gamma:outError:;
@end
