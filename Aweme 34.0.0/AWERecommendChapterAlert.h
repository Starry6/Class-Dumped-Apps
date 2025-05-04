@interface AWERecommendChapterAlert : NSObject
+ (BOOL)canShowWithModel:;
+ (void)showWithModel:confirmBlock:;
@end
