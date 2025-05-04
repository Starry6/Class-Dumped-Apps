@interface AWEMVExtendedConsumptionManager : NSObject
+ (BOOL)canShowExtendedConsumptionWithModel:context:;
+ (id)extendedConsumptionsCanBeShowedWithModel:context:;
+ (id)createElementContainerWithController:context:;
+ (void)updateElementWithElementArray:awemeModel:context:;
+ (id)currentShowingElement:;
+ (id)sortedElementArray;
+ (id)registerElementArray;
@end
