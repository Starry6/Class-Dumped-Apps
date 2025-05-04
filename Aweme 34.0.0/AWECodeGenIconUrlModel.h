@interface AWECodeGenIconUrlModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUrlModel darkModel;
@property (nonatomic) AWECodeGenUrlModel lightModel;
- (id)lightModel;
- (id)darkModel;
- (void)setDarkModel:;
- (void)setLightModel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
