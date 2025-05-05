@interface AWEIMGroupNoticeEditTemplateView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel copyLabel;
@property (nonatomic) UILabel templateLabel;
- (id)copyLabel;
- (void)setCopyLabel:;
- (void)setTemplateLabel:;
- (id)templateLabel;
- (void)updateTitle:copyLabel:templateLabel:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
