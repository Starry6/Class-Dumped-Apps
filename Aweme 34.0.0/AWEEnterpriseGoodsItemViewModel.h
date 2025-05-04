@interface AWEEnterpriseGoodsItemViewModel : NSObject
@property (nonatomic) AWEEnterpriseIMMessageGoodsItemModel detailData;
@property (nonatomic) BOOL hasSubTitle;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString priceString;
@property (nonatomic) NSString avatarUrl;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (id)detailData;
- (void)setDetailData:;
- (BOOL)hasSubTitle;
- (void)setHasSubTitle:;
- (id)convertPrice:;
- (void)configWithData:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)priceString;
- (id)mainTitle;
- (void)setMainTitle:;
- (void)setPriceString:;
@end
