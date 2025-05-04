@interface AWEIAAAwardUIConfigModel : AWEBaseApiModel
@property (nonatomic) AWEIAAAwardUIModel detainmentUIConfig;
@property (nonatomic) AWEIAAAwardUIModel rewatchUIConfig;
@property (nonatomic) AWEIAAAwardCloseTopModel closeTopUIConfig;
- (id)closeTopUIConfig;
- (void)setCloseTopUIConfig:;
- (id)detainmentUIConfig;
- (void)setDetainmentUIConfig:;
- (id)rewatchUIConfig;
- (void)setRewatchUIConfig:;
- (void).cxx_destruct;
+ (id)rewatchUIConfigJSONTransformer;
+ (id)detainmentUIConfigJSONTransformer;
+ (id)closeTopUIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
