@interface AWERelatedRecommendTopElementManager : NSObject
- (void)registerWithElementClass:;
- (void)registerElementsWithElements:configType:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
