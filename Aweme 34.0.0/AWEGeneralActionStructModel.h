@interface AWEGeneralActionStructModel : IESIMBaseApiModel
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) NSString requestTag;
@property (nonatomic) NSString requestExtra;
@property (nonatomic) q actionStatus;
@property (nonatomic) AWEActionResponseModel resultModel;
- (id)requestTag;
- (void)setRequestTag:;
- (id)requestExtra;
- (void)setRequestExtra:;
- (id)resultModel;
- (long long)actionStatus;
- (void)setActionStatus:;
- (void)setResultModel:;
- (void)setButtons:;
- (id)buttons;
- (void).cxx_destruct;
+ (id)buttonsJSONTransformer;
+ (id)actionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
