@interface AWECodeGenV1CommonSubscribeManageResponse : AWEBaseResponseModel
@property (nonatomic) NSArray serviceAccountListModelArray;
@property (nonatomic) NSArray serviceAccountListThirdPartyModelArray;
- (id)serviceAccountListModelArray;
- (id)serviceAccountListThirdPartyModelArray;
- (void)setServiceAccountListModelArray:;
- (void)setServiceAccountListThirdPartyModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
