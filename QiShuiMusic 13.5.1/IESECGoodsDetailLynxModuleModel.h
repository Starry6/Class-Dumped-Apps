@interface IESECGoodsDetailLynxModuleModel : MTLModel
@property (nonatomic) NSString _lynxSchemaJSONString;
@property (nonatomic) NSString _hybridSchemaJSONString;
@property (nonatomic) NSArray orderList;
@property (nonatomic) NSDictionary lynxSchemaDict;
@property (nonatomic) NSDictionary hybridSchemaDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_hybridSchemaJSONString;
- (id)_lynxSchemaJSONString;
- (id)hybridSchemaDict;
- (id)lynxSchemaDict;
- (id)orderList;
- (void)setHybridSchemaDict:;
- (void)setLynxSchemaDict:;
- (void)setOrderList:;
- (void)set_hybridSchemaJSONString:;
- (void)set_lynxSchemaJSONString:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
