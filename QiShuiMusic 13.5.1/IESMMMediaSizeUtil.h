@interface IESMMMediaSizeUtil : NSObject
+ (id)getBrushUpscaleSizeWithSourceSize:;
+ (id)getMaxInsideCenterRect:boundary:;
+ (id)getMinOutsideCenterRect:boundary:;
+ (id)getScaletoSize:withSourceSize:;
+ (id)getSizeWithSourceSize:targetSize:;
+ (id)getSizeWithSourceSizeUp:targetSize:;
+ (id)getUpscaletoSize:withSourceSize:;
+ (BOOL)issourceSize:exceedLimitWithTargetSize:;
+ (id)relativePointFromRectToRect:srcFrame:dstFrame:;
+ (id)relativePointFromScreenToCenterFrame:frameRatio:;
+ (id)relativePointFromScreenToFrame:frame:;
+ (id)relativeRectFromRectToRect:srcSpace:dstSpace:;
@end
