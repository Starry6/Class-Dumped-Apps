@interface HMDOTConfig : HMDModuleConfig
@property (nonatomic) NSDictionary allowServiceList;
@property (nonatomic) NSDictionary allowErrorList;
- (id)allowErrorList;
- (id)allowServiceList;
- (id)getModule;
- (void)setAllowErrorList:;
- (void)setAllowServiceList:;
- (void).cxx_destruct;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
