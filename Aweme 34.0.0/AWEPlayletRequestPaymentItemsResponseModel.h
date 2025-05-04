@interface AWEPlayletRequestPaymentItemsResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSNumber errorCode;
- (void)setErrorMsg:;
- (id)awemeModels;
- (id)errorMsg;
- (void)setAwemeModels:;
- (void)setErrorCode:;
- (id)errorCode;
- (void).cxx_destruct;
+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
