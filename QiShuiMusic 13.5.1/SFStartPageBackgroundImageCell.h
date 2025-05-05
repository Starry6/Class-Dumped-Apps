@interface SFStartPageBackgroundImageCell : UICollectionViewCell
@property (nonatomic) <SFStartPageBackgroundImageCellDelegate> delegate;
@property (nonatomic) BOOL showsCustomImageControls;
@property (nonatomic) BOOL showsSelectionRing;
@property (nonatomic) UIImage image;
- (void)setDelegate:;
- (void)setImage:;
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)image;
- (void)didSelectClearButton:;
- (void)updateSelectionIndicatorColor;
- (BOOL)showsCustomImageControls;
- (void)setShowsCustomImageControls:;
- (BOOL)showsSelectionRing;
- (void)setShowsSelectionRing:;
@end
