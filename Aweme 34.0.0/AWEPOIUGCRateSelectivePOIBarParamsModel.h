@interface AWEPOIUGCRateSelectivePOIBarParamsModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString defaultName;
@property (nonatomic) NSString defaultId;
@property (nonatomic) NSString navbarTitle;
@property (nonatomic) NSDictionary commonRequestParams;
@property (nonatomic) NSDictionary initialRequestParams;
- (id)commonRequestParams;
- (id)defaultId;
- (void)setDefaultId:;
- (id)initialRequestParams;
- (void)setInitialRequestParams:;
- (void)setCommonRequestParams:;
- (unsigned long long)type;
- (id)defaultName;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (void)setNavbarTitle:;
- (id)navbarTitle;
- (void)setDefaultName:;
@end
