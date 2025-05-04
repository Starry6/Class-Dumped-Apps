@interface AWEPaySwiftImpl.CCMTrafficInfoModel : MTLModel
@property (nonatomic) NSString trafficID;
@property (nonatomic) NSString trafficName;
@property (nonatomic) NSString trafficType;
@property (nonatomic) NSString logoURL;
- (id)trafficID;
- (void)setTrafficID:;
- (id)trafficName;
- (void)setTrafficName:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (void)setTrafficType:;
- (id)initWithCoder:;
- (id)trafficType;
- (id)logoURL;
- (void)setLogoURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
