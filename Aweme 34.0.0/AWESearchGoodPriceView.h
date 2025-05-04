@interface AWESearchGoodPriceView : UIView
@property (nonatomic) BOOL needUnifiedUIConfig;
@property (nonatomic) AWESearchMerchandiseBiddingInformation bidInfo;
@property (nonatomic) UIImageView bgView;
@property (nonatomic) UILabel goodPriceLabel;
@property (nonatomic) UIImageView icon;
- (id)bidInfo;
- (void)setBidInfo:;
- (BOOL)needUnifiedUIConfig;
- (void)setNeedUnifiedUIConfig:;
- (void)setBidInfo:needUnifiedUIConfig:;
- (id)goodPriceLabel;
- (void)setGoodPriceLabel:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
@end
