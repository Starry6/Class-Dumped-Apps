@interface AWECodeGenLandingSwitchEditInfoModel : AWEBaseDataModel
@property (nonatomic) q switchLandingTabId;
@property (nonatomic) NSArray landingSwitchsEditModelArray;
- (long long)switchLandingTabId;
- (void)setSwitchLandingTabId:;
- (id)landingSwitchsEditModelArray;
- (void)setLandingSwitchsEditModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
