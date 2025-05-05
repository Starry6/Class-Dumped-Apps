@interface CJPayInComePayAlertContentView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) CJPaySubPayTypeIconTipModel iconTips;
- (id)contentLabelWithText:lineHeight:;
- (id)iconTips;
- (id)initWithIconTips:;
- (void)p_setupUI;
- (void)setIconTips:;
- (id)titleLabelWithText:;
- (id)content;
- (void)setContent:;
- (void)setTitleLabel:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentLabel;
- (void)setContentLabel:;
@end
