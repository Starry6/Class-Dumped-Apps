@interface IESECWebImageTemplateManager : NSObject
@property (nonatomic) NSMutableDictionary templateCache;
@property (nonatomic) NSDictionary abTestMap;
@property (nonatomic) NSDictionary settingMap;
@property (nonatomic) NSDictionary blockMap;
- (id)p_combineKeyForBizTag:sceneTag:;
- (id)abTestMap;
- (id)blockMap;
- (void)configInfoForBizTag:sceneTag:callback:;
- (id)configKeyForBizTag:sceneTag:;
- (BOOL)p_blockRemakeTemplateForKey:;
- (id)p_configKeyForBizTag:sceneTag:fromABTest:;
- (id)p_configKeyForIdentifier:fromABTest:;
- (id)p_filterKeyForUrl:filters:;
- (id)p_findGroupStringFromUrl:checkResult:groupIdx:;
- (id)p_templateConfigForKey:;
- (id)reportConfigInfoForBizTag:sceneTag:;
- (void)setAbTestMap:;
- (void)setBlockMap:;
- (void)setSettingMap:;
- (id)settingMap;
- (id)templateRulesForUrl:bizTag:sceneTag:;
- (id)tp_createTemplateRulesModel:;
- (id)init;
- (id)templateCache;
- (void)setTemplateCache:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
