@interface AWESpecialCardConfigManager : NSObject
+ (id)classNameArray:;
+ (BOOL)isChannelExistWithTabID:;
+ (BOOL)feedCardTemplateDisable;
+ (id)getClassArray:;
+ (id)filterClassArray:;
+ (id)businessBlackList;
+ (id)cardControllerAndBusinessIDMaps;
@end
