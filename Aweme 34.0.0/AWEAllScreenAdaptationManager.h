@interface AWEAllScreenAdaptationManager : NSObject
+ (BOOL)shouldAdaptAllScreenWithModel:;
+ (unsigned long long)allScreenCropOptimizeStyleWithModel:;
+ (id)parsePositionWithModel:;
+ (BOOL)isBlackEdgeVideoWithModel:;
+ (BOOL)isStaticBlurFrameSelectScoreExceedThreshold:;
+ (unsigned long long)newCropOptimizeStyleWithModel:;
+ (id)parseFrameSelectScoreWithModel:;
+ (void)trackAdaptionInterceptInfoWithModel:;
+ (id)OCRHighValueBoxWithModel:;
@end
