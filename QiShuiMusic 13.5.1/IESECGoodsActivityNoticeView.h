@interface IESECGoodsActivityNoticeView : UIView
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
- (void)handleActivityStateChangeNotification:;
- (void)handleActivityUpdateNotification:;
- (void)setupActivityNoticeView;
- (void)setTimeLabel:;
- (id)timeLabel;
- (void)dealloc;
- (void)updateContent;
- (id)initWithParameters:;
- (id)parameters;
- (void).cxx_destruct;
- (void)setParameters:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
