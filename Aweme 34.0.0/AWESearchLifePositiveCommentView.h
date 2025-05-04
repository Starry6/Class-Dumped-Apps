@interface AWESearchLifePositiveCommentView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? didTapBlock;
- (void)setDidTapBlock:;
- (id)didTapBlock;
- (void)updateContentWithIconURL:text:;
- (id)textLabel;
- (void)didTap:;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIconImageView:;
- (void)setTextLabel:;
- (void)setupUI;
@end
