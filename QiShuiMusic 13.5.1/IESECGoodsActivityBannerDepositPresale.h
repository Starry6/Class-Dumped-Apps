@interface IESECGoodsActivityBannerDepositPresale : IESECGoodsActivityBanner
@property (nonatomic) UILabel prefixLabel;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView bgLogoPicture;
@property (nonatomic) IESECInsetsLabel salesLabel;
@property (nonatomic) UILabel dueLabel;
- (id)bgLogoPicture;
- (id)dueLabel;
- (void)handleActivityUpdateNotification:;
- (id)initWithFrame:parameters:type:style:;
- (id)salesLabel;
- (void)setBgLogoPicture:;
- (void)setDueLabel:;
- (void)setSalesLabel:;
- (void)updateDiscountPriceView;
- (void)updateContent;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)prefixLabel;
- (void)setPrefixLabel:;
@end
