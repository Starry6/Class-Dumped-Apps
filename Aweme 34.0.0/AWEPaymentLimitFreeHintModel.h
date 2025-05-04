@interface AWEPaymentLimitFreeHintModel : AWEBaseApiModel
@property (nonatomic) NSString hintText;
@property (nonatomic) AWEURLModel hintIconURL;
- (id)hintText;
- (id)hintIconURL;
- (void)setHintIconURL:;
- (void).cxx_destruct;
- (void)setHintText:;
+ (id)hintIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
