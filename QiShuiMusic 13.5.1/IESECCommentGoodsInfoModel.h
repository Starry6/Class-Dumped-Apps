@interface IESECCommentGoodsInfoModel : MTLModel
@property (nonatomic) NSNumber productID;
@property (nonatomic) IESECURLModel icon;
@property (nonatomic) NSString title;
@property (nonatomic) IESECGoodsPrice price;
@property (nonatomic) NSString statusText;
@property (nonatomic) NSNumber goodRatio;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)goodRatio;
- (void)setGoodRatio:;
- (id)productID;
- (id)statusText;
- (void)setProductID:;
- (id)icon;
- (void)setTitle:;
- (id)title;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)price;
- (void)setPrice:;
- (void)setStatusText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
