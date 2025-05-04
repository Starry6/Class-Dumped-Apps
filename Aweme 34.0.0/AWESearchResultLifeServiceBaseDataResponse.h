@interface AWESearchResultLifeServiceBaseDataResponse : AWESearchResultVerticalBaseDataResponse
@property (nonatomic) AWESearchResultLifeServiceGlobalInfoModel lifeServiceGlobalInfo;
@property (nonatomic) AWESearchPOIFilterCardModel patchModel;
@property (nonatomic) NSArray commonPatchModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)patchModel;
- (void)setPatchModel:;
- (id)lifeServiceGlobalInfo;
- (id)commonPatchModel;
- (void)setLifeServiceGlobalInfo:;
- (void)setCommonPatchModel:;
- (void).cxx_destruct;
+ (id)commonPatchModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
