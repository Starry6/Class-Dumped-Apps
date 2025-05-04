@interface AWEPOIGoodsDetailSharePlayInfoStructModel : MTLModel
@property (nonatomic) AWEPOIGoodsDetailSharePlayInfoModel sharePlayInfo;
@property (nonatomic) q statusCode;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sharePlayInfo;
- (void)setSharePlayInfo:;
- (long long)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
- (void)setStatusMessage:;
- (id)statusMessage;
+ (id)sharePlayInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
