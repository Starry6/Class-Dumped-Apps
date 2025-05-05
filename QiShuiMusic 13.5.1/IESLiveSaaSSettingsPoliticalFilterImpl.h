@interface IESLiveSaaSSettingsPoliticalFilterImpl : NSObject
@property (nonatomic) NSMutableDictionary politicalDic;
@property (nonatomic) <IESLiveSaaSSettingsPoliticalService> politicalService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerPoliticWithKey:enableValidForTarget:defaultStringValue:;
- (void)registerPoliticWithKey:enableValidForTarget:defaultNumberValue:;
- (id)politicalDic;
- (id)politicalService;
- (void)registerNeedFilterAllKeys;
- (void)setPoliticalDic:;
- (void)setPoliticalService:;
- (id)valueForSettingsKey:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
