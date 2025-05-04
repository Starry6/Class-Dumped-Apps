@interface AWEXScreenAdaptManager : NSObject
+ (id)standPlayerFrame;
+ (BOOL)needAdaptScreen;
+ (BOOL)aspectFillForRatio:isVR:publishViewModel:;
+ (BOOL)is9To16StandardSize:;
+ (BOOL)isLessThan9To16Size:;
+ (id)maskLayerWithPlayerFrame:;
+ (BOOL)isGreaterThan9To16Size:;
+ (BOOL)is9To16StandardRatio:;
+ (BOOL)isLessThan9To16Ratio:;
+ (BOOL)isGreaterThan9To16Ratio:;
+ (BOOL)aspectFillForRatio:publishViewModel:;
@end
