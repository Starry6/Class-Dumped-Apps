@interface AWELiveShelfCellCouponView : UIView
@property (nonatomic) UIColor borderColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIFont textFont;
@property (nonatomic) UILabel ticketTitleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) AWELiveShelfCellDashedLine line;
@property (nonatomic) NSString serviceTagText;
- (id)ticketTitleLabel;
- (void)setServiceTagText:;
- (void)setTicketTitle:content:;
- (id)initWithBorderColor:textColor:textFont:;
- (id)serviceTagText;
- (void)setTicketTitleLabel:;
- (void)setBorderColor:;
- (id)borderColor;
- (id)textFont;
- (void)setTextColor:;
- (void)setContent:;
- (id)line;
- (void).cxx_destruct;
- (id)textColor;
- (void)setLine:;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setTextFont:;
- (double)viewWidth;
@end
