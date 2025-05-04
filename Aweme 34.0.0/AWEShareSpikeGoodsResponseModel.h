@interface AWEShareSpikeGoodsResponseModel : MTLModel
@property (nonatomic) NSNumber st;
@property (nonatomic) NSString msg;
@property (nonatomic) AWEShareSpikeGoodsDataModel data;
@property (nonatomic) NSString dataJson;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSt:;
- (id)dataJson;
- (void)setDataJson:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
- (id)st;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;
@end
