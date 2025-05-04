@interface AWESearchEcommerceInfoAnchorModel : AWEBaseApiModel
@property (nonatomic) NSString anchorTitle;
@property (nonatomic) NSString totalText;
@property (nonatomic) NSString currentProductID;
@property (nonatomic) NSArray goods;
- (id)goods;
- (void)setGoods:;
- (id)anchorTitle;
- (void)setAnchorTitle:;
- (void)setTotalText:;
- (void)setCurrentProductID:;
- (id)currentProductID;
- (id)totalText;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
