@interface AWEIMCheckCreateFansGroupResponseModel : AWEBaseApiModel
@property (nonatomic) Q actionType;
@property (nonatomic) AWEIMGroupActionCheckPromptInfo promptInfo;
@property (nonatomic) AWEIMCreateGroupInfo createInfo;
@property (nonatomic) AWEIMCodeGenPublicGroupCreateInfoModel publicGroupCreateInfo;
- (id)publicGroupCreateInfo;
- (id)promptInfo;
- (void)setCreateInfo:;
- (void)setPromptInfo:;
- (void)setPublicGroupCreateInfo:;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)createInfo;
+ (id)promptInfoJSONTransformer;
+ (id)createInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)actionTypeJSONTransformer;
@end
