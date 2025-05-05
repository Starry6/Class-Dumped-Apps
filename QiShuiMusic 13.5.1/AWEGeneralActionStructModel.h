@interface AWEGeneralActionStructModel : IESIMBaseApiModel
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) NSString requestTag;
@property (nonatomic) NSString requestExtra;
@property (nonatomic) q actionStatus;
@property (nonatomic) AWEActionResponseModel resultModel;
- (void)setResultModel:;
- (long long)actionStatus;
- (id)requestExtra;
- (id)requestTag;
- (id)resultModel;
- (void)setActionStatus:;
- (void)setRequestExtra:;
- (void)setRequestTag:;
- (id)buttons;
- (void).cxx_destruct;
- (void)setButtons:;
+ (id)actionStatusJSONTransformer;
+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
