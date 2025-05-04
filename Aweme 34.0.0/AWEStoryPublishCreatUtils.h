@interface AWEStoryPublishCreatUtils : NSObject
+ (id)scaleAspectFillmageWithImage:size:;
+ (BOOL)sizeIsVaild:;
+ (id)resizeImageWithSize:originImage:;
+ (id)suitableColorFromColor:;
+ (id)colorFromImage:needSuitColor:;
+ (id)makeRectWithAspectRatioOutsideRect:boundingRect:;
+ (BOOL)p_widthIsValid:;
+ (id)pureColorImageWithPrimaryImage:size:needSuitColor:;
@end
