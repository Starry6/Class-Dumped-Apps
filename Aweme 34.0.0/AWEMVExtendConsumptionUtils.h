@interface AWEMVExtendConsumptionUtils : NSObject
+ (id)getTemplateBarModelWithAwemeModel:bottomBarIdentifier:;
+ (BOOL)canShowBottomBarWithTemplateBarModel:context:;
+ (id)createMVExtendedConsumptionModel:barIdentifier:barName:contentBlock:subContentBlock:;
+ (id)adaptiveIconSize:;
+ (double)adaptiveHeight:;
@end
