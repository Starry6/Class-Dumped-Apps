@interface AWESearchCachalotLiveDataController : AWESearchCachalotDataController
@property (nonatomic) @? enterFromForParamsBlock;
@property (nonatomic) @? fromGroupIDParamsBlock;
@property (nonatomic) @? searchExtraParamsBlock;
- (id)searchScene;
- (long long)requestDataCount;
- (id)customRequestPath;
- (id)customSearchType;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (id)customInnerVCModelsFromOuterDataModels:;
- (id)customAwemeModelFromOuterDataModel:;
- (id)enterFromForParamsBlock;
- (void)setEnterFromForParamsBlock:;
- (id)fromGroupIDParamsBlock;
- (void)setFromGroupIDParamsBlock:;
- (id)searchExtraParamsBlock;
- (void)setSearchExtraParamsBlock:;
- (id)init;
- (void).cxx_destruct;
@end
