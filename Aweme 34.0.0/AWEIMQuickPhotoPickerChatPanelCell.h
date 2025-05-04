@interface AWEIMQuickPhotoPickerChatPanelCell : UICollectionViewCell
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView highlightMaskView;
- (void)p_setupUI;
- (void)configWithModel:;
- (id)tagImageView;
- (void)setTagImageView:;
- (void)setHighlightMaskView:;
- (id)highlightMaskView;
- (id)textLabel;
- (id)initWithFrame:;
- (id)containerView;
- (void)setHighlighted:;
- (void)setContainerView:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setTextLabel:;
- (void)setBadgeHidden:;
+ (id)identifier;
@end
