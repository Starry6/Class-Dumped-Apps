@interface AWEShareHotSearchDataRequestModel : AWEBaseApiModel
@property (nonatomic) NSString requestDataUrl;
@property (nonatomic) NSString requestMethod;
@property (nonatomic) NSDictionary requestParams;
- (id)requestDataUrl;
- (id)initWithUrl:method:requestParams:;
- (void)setRequestDataUrl:;
- (void).cxx_destruct;
- (id)requestMethod;
- (id)requestParams;
- (void)setRequestParams:;
- (void)setRequestMethod:;
@end
