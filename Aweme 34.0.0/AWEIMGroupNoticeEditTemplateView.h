@interface AWEIMGroupNoticeEditTemplateView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel copyLabel;
@property (nonatomic) UILabel templateLabel;
- (id)copyLabel;
- (id)templateLabel;
- (void)updateTitle:copyLabel:templateLabel:;
- (void)setCopyLabel:;
- (void)setTemplateLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
