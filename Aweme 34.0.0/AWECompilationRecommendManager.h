@interface AWECompilationRecommendManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isNeedImmersiveGuide;
+ (void)recordImmersiveGuideShowCount;
+ (void)setIsImmersiveUserDrag:;
+ (long long)v3GuideShowCount;
+ (BOOL)isImmersiveUserDrag;
+ (long long)immersiveGuideShowCount;
+ (BOOL)isCompilationRecommendV3PageUsed;
+ (void)setIsCompilationRecommendV3PageUsed:;
+ (unsigned long long)abV3PlanType;
+ (unsigned long long)abV3ExitType;
+ (BOOL)isNeedV3Guide;
+ (void)recordV3GuideShowCount;
@end
