@interface IESLiveMessageListShareCellView : IESLiveMessageListBaseCell
@property (nonatomic) UIView shareItemView;
@property (nonatomic) UILabel shareItemNameLabel;
@property (nonatomic) UIImageView shareItemIcon;
- (BOOL)needLoadMessageTextLabel;
- (void)refreshWith:;
- (void)setShareItemIcon:;
- (void)setShareItemNameLabel:;
- (void)setShareItemView:;
- (id)shareItemIcon;
- (id)shareItemNameLabel;
- (id)shareItemView;
- (void).cxx_destruct;
- (void)setupView;
@end
