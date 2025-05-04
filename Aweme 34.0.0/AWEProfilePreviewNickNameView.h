@interface AWEProfilePreviewNickNameView : UIView
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel idLabel;
@property (nonatomic) UIImageView iconView;
- (id)idPrefixStr;
- (double)idLineHeight;
- (id)initWithFrame:;
- (id)iconView;
- (double)contentHeight;
- (void)setIconView:;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)userModel;
- (void)setNameLabel:;
- (void)setupUI;
- (id)nameTitle;
- (id)idLabel;
- (id)idStr;
- (void)setIdLabel:;
@end
