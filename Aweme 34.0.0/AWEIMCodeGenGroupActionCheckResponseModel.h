@interface AWEIMCodeGenGroupActionCheckResponseModel : AWEBaseResponseModel
@property (nonatomic) q canAction;
@property (nonatomic) AWEIMCodeGenGroupActionCheckPromptInfoModel promptInfoModel;
@property (nonatomic) AWEIMCodeGenFansGroupCreateInfoModel fansGroupCreateInfoModel;
@property (nonatomic) AWEIMCodeGenPublicGroupCreateInfoModel publicGroupCreateInfoModel;
@property (nonatomic) NSDictionary ext;
- (void)setExt:;
- (long long)canAction;
- (id)promptInfoModel;
- (void)setCanAction:;
- (void)setPromptInfoModel:;
- (id)fansGroupCreateInfoModel;
- (void)setFansGroupCreateInfoModel:;
- (id)publicGroupCreateInfoModel;
- (void)setPublicGroupCreateInfoModel:;
- (void).cxx_destruct;
- (id)ext;
+ (id)JSONKeyPathsByPropertyKey;
@end
