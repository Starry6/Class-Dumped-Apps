@interface BDASifXBridgeSendAdLogMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString category;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString label;
@property (nonatomic) NSString refer;
@property (nonatomic) NSNumber has_ad_info;
@property (nonatomic) NSNumber creative_id;
@property (nonatomic) NSString log_extra;
@property (nonatomic) NSDictionary extParam;
- (void)setCreative_id:;
- (void)setHas_ad_info:;
- (id)creative_id;
- (id)extParam;
- (id)has_ad_info;
- (id)log_extra;
- (id)refer;
- (void)setExtParam:;
- (void)setLog_extra:;
- (void)setRefer:;
- (id)tag;
- (void)setLabel:;
- (id)label;
- (void)setTag:;
- (void)setCategory:;
- (void).cxx_destruct;
- (id)category;
+ (id)JSONKeyPathsByPropertyKey;
@end
