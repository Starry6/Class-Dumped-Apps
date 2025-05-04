@interface AWEDouPlusToastInfoResponseModel : AWEBaseApiModel
@property (nonatomic) AWEDouplusToastModel toastInfoModel;
@property (nonatomic) AWEDouplusIconModel iconInfoModel;
@property (nonatomic) q douPlusType;
- (id)toastInfoModel;
- (void)setToastInfoModel:;
- (id)iconInfoModel;
- (void)setIconInfoModel:;
- (long long)douPlusType;
- (void)setDouPlusType:;
- (void).cxx_destruct;
+ (id)toastInfoModelJSONTransformer;
+ (id)iconInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
