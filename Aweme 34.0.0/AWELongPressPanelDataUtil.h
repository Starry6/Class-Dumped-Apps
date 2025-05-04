@interface AWELongPressPanelDataUtil : NSObject
+ (long long)getConfigTypeWithAwemeModel:;
+ (id)getDefaultBuildContextsForModern;
+ (id)getDefaultBuildContextsForConfigJX;
+ (id)generatePanelModuleModelWithContext:;
+ (id)getbuildContextsWithConfigType:;
+ (id)generatePanelConfigModelWithContexts:configType:;
+ (id)generateModuleItemModelWithContext:;
+ (id)getDefaultPanelConfigWithConfigType:;
+ (id)panelConfigIdentifierMap;
+ (id)panelConfigGroupTypeMap;
@end
