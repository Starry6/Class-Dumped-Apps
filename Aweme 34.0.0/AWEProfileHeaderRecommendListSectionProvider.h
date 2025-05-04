@interface AWEProfileHeaderRecommendListSectionProvider : NSObject
+ (Class)sectionViewModelClass;
+ (Class)sectionControllerClass;
+ (BOOL)shouldShowSectionWithContext:;
@end
