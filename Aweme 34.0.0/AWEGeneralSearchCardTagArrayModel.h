@interface AWEGeneralSearchCardTagArrayModel : AWEBaseApiModel
@property (nonatomic) NSMutableArray cardTagArray;
@property (nonatomic) NSArray hotspotTabConfig;
@property (nonatomic) NSArray commonTabConfig;
- (id)cardTagArray;
- (void)setCardTagArray:;
- (void)setHotspotTabConfig:;
- (id)commonTabConfig;
- (void)setCommonTabConfig:;
- (id)hotspotTabConfig;
- (long long)getTabConfigType;
- (void).cxx_destruct;
+ (id)cardTagArrayJSONTransformer;
+ (id)hotspotTabConfigJSONTransformer;
+ (id)commonTabConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
