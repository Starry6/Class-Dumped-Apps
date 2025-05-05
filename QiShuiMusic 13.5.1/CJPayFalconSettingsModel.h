@interface CJPayFalconSettingsModel : JSONModel
@property (nonatomic) BOOL enableIntercept;
@property (nonatomic) NSArray<CJPayFalconDefaultConfigModel> falconConfigList;
@property (nonatomic) NSArray<CJPayFalconCustomConfigModel> customConfigList;
- (BOOL)enableIntercept;
- (id)customConfigList;
- (id)falconConfigList;
- (void)setCustomConfigList:;
- (void)setEnableIntercept:;
- (void)setFalconConfigList:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
