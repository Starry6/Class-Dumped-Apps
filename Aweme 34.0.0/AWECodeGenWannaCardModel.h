@interface AWECodeGenWannaCardModel : AWEBaseDataModel
@property (nonatomic) q type;
@property (nonatomic) AWECodeGenSearchCardModel searchCardModel;
@property (nonatomic) AWECodeGenOperationCardModel operationCardModel;
@property (nonatomic) AWECodeGenWannaLightCardModel lightFeedbackCardModel;
@property (nonatomic) AWECodeGenWannaJumpCardModel jumpFeedbackCardModel;
@property (nonatomic) AWECodeGenWannaLynxCardModel commonLynxCardModel;
@property (nonatomic) AWECodeGenWannaPreTabModel wannaPreTabModel;
@property (nonatomic) NSArray p_newOperationCardModelArray;
- (id)commonLynxCardModel;
- (id)searchCardModel;
- (void)setSearchCardModel:;
- (id)operationCardModel;
- (void)setOperationCardModel:;
- (id)lightFeedbackCardModel;
- (void)setLightFeedbackCardModel:;
- (id)jumpFeedbackCardModel;
- (void)setJumpFeedbackCardModel:;
- (void)setCommonLynxCardModel:;
- (id)wannaPreTabModel;
- (void)setWannaPreTabModel:;
- (id)p_newOperationCardModelArray;
- (void)setP_newOperationCardModelArray:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
