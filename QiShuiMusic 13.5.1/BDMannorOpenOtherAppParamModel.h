@interface BDMannorOpenOtherAppParamModel : BDXBridgeModel
@property (nonatomic) NSString url;
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
- (id)extra;
- (id)url;
- (void)setUrl:;
- (void)setTag:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
