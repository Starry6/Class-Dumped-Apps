@interface AWESearchDynamicResourceManager : AWESearchCachalotDynamicResourceManager
- (void)removeNodesInSurlRecord:;
- (id)wrappedAWEListDataBlock:dynamicPatchExtractBlock:;
- (id)initWithScene:;
+ (BOOL)willUseSurl:inSearchScene:channel:isCachalot:;
+ (id)findSceneConf:;
+ (id)legacyConf;
+ (BOOL)enableSurlSupportInSearchScene:isCachalot:;
@end
