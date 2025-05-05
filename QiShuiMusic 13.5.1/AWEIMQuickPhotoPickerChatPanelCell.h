@interface AWEIMQuickPhotoPickerChatPanelCell : UICollectionViewCell
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView highlightMaskView;
- (void)configWithModel:;
- (id)highlightMaskView;
- (void)p_setupUI;
- (void)setHighlightMaskView:;
- (void)setTagImageView:;
- (id)tagImageView;
- (id)textLabel;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)iconImageView;
- (void)setTextLabel:;
- (void)setIconImageView:;
- (void)setBadgeHidden:;
+ (id)identifier;
@end
