@interface BDMannorLaunchWXMiniProParamModel : BDXBridgeModel
@property (nonatomic) NSString refer;
@property (nonatomic) NSString tag;
@property (nonatomic) NSDictionary adExtraData;
@property (nonatomic) NSDictionary wechatMiniappInfo;
@property (nonatomic) NSDictionary wechatMpInfo;
- (void)setAdExtraData:;
- (id)adExtraData;
- (id)refer;
- (void)setRefer:;
- (void)setWechatMiniappInfo:;
- (void)setWechatMpInfo:;
- (id)wechatMiniappInfo;
- (id)wechatMpInfo;
- (id)tag;
- (void)setTag:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:;
@end
