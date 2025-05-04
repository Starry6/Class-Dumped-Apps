@interface AWEClientABTestManager : NSObject
@property (nonatomic) NSMutableDictionary propertyKeyDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (id)clientABTestWithPropertyName:;
- (void)clientInitialize;
- (id)propertyKeyDic;
- (id)clientABTestWithPropertyName:exposure:;
- (void)registerDelayDidClientAB;
- (void)registerClientABTestExperWithModel:;
- (id)groupsForKey:groupIDs:flowRates:experValues:;
- (id)clientLayerWithGroups:key:filters:;
- (id)clientExperimentWithKey:layer:defaultValue:valueType:;
- (void)registerClientABTestExperWithExperKey:groupIDs:flowRates:experValues:defaultValue:filters:valueType:;
- (void)saveClientABTestKey:propertyName:;
- (void)registerClientABTestExperWithModel:installTimeFilter:;
- (void)setPropertyKeyDic:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)registerClientABTest:;
+ (id)sharedManager;
@end
