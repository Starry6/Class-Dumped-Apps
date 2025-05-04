@interface AWEPaidStreamIAAUIConfig : AWEBaseApiModel
@property (nonatomic) AWEPaidStreamIAAAwardUIItem detainmentUIItem;
@property (nonatomic) AWEPaidStreamIAAAwardUIItem rewatchUIItem;
@property (nonatomic) AWEPaidStreamIAAAwardCloseTopModel closeTopUIConfig;
- (void)setDetainmentUIItem:;
- (void)setRewatchUIItem:;
- (id)detainmentUIItem;
- (id)rewatchUIItem;
- (id)closeTopUIConfig;
- (void)setCloseTopUIConfig:;
- (void).cxx_destruct;
+ (id)rewatchUIConfigJSONTransformer;
+ (id)detainmentUIConfigJSONTransformer;
+ (id)closeTopUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
