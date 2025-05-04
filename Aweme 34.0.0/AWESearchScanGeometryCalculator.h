@interface AWESearchScanGeometryCalculator : NSObject
+ (id)expandRect:fixMinWidth:;
+ (id)expandFrame:withPadding:;
+ (id)buildCGRectFromBoxDic:;
+ (id)denormalizedPoint:inBounds:;
+ (id)filterBoxes:coverPoint:;
+ (id)filterBoxes:NearestPoint:;
+ (id)buildRectArrayFromBoxArray:;
+ (id)normalizedPoint:inBounds:;
+ (id)denormalizedRect:inBounds:;
+ (id)scaleRect:fixMinWidth:;
+ (id)rectWithCenterPoint:fixMinWidth:;
+ (id)constrainRect:inBounds:;
+ (void)scanView:movePoint:;
@end
