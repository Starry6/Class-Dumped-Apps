@interface IESECGoodsInstallmentDescModel : IESECBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSArray textHigherItems;
- (id)textHigherItems;
- (void)setTextHigherItems:;
- (void)setText:;
- (void).cxx_destruct;
- (id)text;
+ (id)textHigherItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
