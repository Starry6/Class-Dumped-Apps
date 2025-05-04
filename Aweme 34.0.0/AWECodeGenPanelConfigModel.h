@interface AWECodeGenPanelConfigModel : AWEBaseDataModel
@property (nonatomic) q configType;
@property (nonatomic) NSArray panelModulesModelArray;
@property (nonatomic) NSString hostguesttype;
- (id)hostguesttype;
- (id)panelModulesModelArray;
- (void)setPanelModulesModelArray:;
- (void)setHostguesttype:;
- (void).cxx_destruct;
- (long long)configType;
- (void)setConfigType:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
