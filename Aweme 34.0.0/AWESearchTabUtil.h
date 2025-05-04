@interface AWESearchTabUtil : NSObject
+ (id)tabNameForTab:;
+ (long long)feedTypeForTab:;
+ (id)tabForTabType:;
+ (unsigned long long)tabTypeOfTab:;
+ (long long)indexOfTab:tabModels:;
+ (id)tabAtIndex:tabModels:;
+ (id)tabTypeToTabfeedTypeMap;
+ (BOOL)checkTabModelsRepeatIsVaild:;
+ (unsigned long long)tabTypeForTabfeedType:;
+ (unsigned long long)tabTypeAtIndex:tabModels:;
+ (long long)indexOfTabType:selectedIndex:tabModels:;
+ (id)settingsSearchDynamicTabModels;
+ (id)defaultSearchTabModels;
+ (id)getTabModelWithTabType:;
+ (id)settingsSearchTabModels;
+ (id)tabModelsAfterRemovingModelWithTab:inSearchTabModels:;
+ (id)tabModelsAfterRemovingModelWithArr:inSearchTabModels:;
@end
