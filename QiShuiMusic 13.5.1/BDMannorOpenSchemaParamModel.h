@interface BDMannorOpenSchemaParamModel : BDXBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString refer;
@property (nonatomic) NSString tag;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary adExtraData;
- (void)setAdExtraData:;
- (id)adExtraData;
- (id)refer;
- (void)setExtra:;
- (void)setRefer:;
- (id)tag;
- (id)schema;
- (id)extra;
- (void)setSchema:;
- (void)setTag:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
