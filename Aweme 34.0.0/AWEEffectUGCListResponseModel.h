@interface AWEEffectUGCListResponseModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSArray ugcData;
@property (nonatomic) NSArray urlPrefix;
@property (nonatomic) NSString message;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ugcData;
- (void)setUrlPrefix:;
- (void)setUgcData:;
- (id)statusCode;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (void)setStatusCode:;
- (id)urlPrefix;
+ (id)ugcDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
