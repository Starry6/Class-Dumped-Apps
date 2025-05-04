@interface AWEPublishVideoSyncContentVCXiguaCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton tipButton;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEPublishVideoSyncContentViewItem item;
@property (nonatomic) @? clickTipBlock;
- (void)hideBottomLine;
- (id)tipButton;
- (void)setTipButton:;
- (void)tipButtonTapped:;
- (id)clickTipBlock;
- (void)setClickTipBlock:;
- (void)setItem:;
- (id)item;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateWithItem:;
- (id)lineView;
- (void)setLineView:;
- (void)setupViews;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
