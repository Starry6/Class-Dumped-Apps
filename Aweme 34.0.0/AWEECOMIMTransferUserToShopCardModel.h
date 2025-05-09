@interface AWEECOMIMTransferUserToShopCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) NSArray multiLineIcon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString statusDesc;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString productUrl;
@property (nonatomic) NSString goodTitle;
@property (nonatomic) NSString goodImg;
@property (nonatomic) NSString showPrice;
@property (nonatomic) NSString sellNum;
@property (nonatomic) NSString orderId;
@property (nonatomic) NSString goodNum;
@property (nonatomic) NSArray multiLineDesc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showPrice;
- (void)setShowPrice:;
- (id)orderId;
- (void)setOrderId:;
- (id)statusDesc;
- (void)setStatusDesc:;
- (void)updateModelWithData:encrypted:;
- (void)setGoodTitle:;
- (void)setGoodImg:;
- (void)setGoodNum:;
- (id)goodImg;
- (id)goodTitle;
- (id)goodNum;
- (void)setSellNum:;
- (id)productUrl;
- (id)multiLineDesc;
- (id)iconForIndex:;
- (void)setProductUrl:;
- (id)sellNum;
- (void)setMultiLineDesc:;
- (void)setMultiLineIcon:;
- (id)multiLineIcon;
- (id)productId;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setProductId:;
+ (Class)cardViewClass;
@end
