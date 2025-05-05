@interface IESLiveInteractionEmojiPanelItemView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView tagView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) IESLiveInteractionEmojiPanelViewItem item;
- (void)p_updateTagWithText:;
- (void)renderItem:;
- (void)setTagLabel:;
- (id)tagLabel;
- (void)tapGestureActions:;
- (void)updateMasConstraints;
- (void)setupConstraints;
- (id)item;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:;
- (void)setupViews;
- (id)tagView;
- (void)setTagView:;
@end
