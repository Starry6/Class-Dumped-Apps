@interface SFInteractiveBannerCell : UICollectionViewCell
@property (nonatomic) UILabel leadingLabel;
@property (nonatomic) UILabel captionLabel;
- (void)setModel:;
- (void)_updateVibrancy;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)captionLabel;
- (void)_actionButtonTapped:;
- (void)_updateActionButtonWithText:;
- (void)_removeActionButton;
- (id)leadingLabel;
+ (id)reuseIdentifier;
@end
