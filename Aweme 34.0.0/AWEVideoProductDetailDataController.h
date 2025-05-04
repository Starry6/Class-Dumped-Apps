@interface AWEVideoProductDetailDataController : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)requestVideoPaymentProductInfoWithBlock:;
- (id)feedConfigRequestParamsWithParams;
- (void)updateModelPaymentProductInfoWithResponseModel:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
@end
