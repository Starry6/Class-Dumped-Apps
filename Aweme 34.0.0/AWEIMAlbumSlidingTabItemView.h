@interface AWEIMAlbumSlidingTabItemView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString text;
@property (nonatomic) BOOL selected;
@property (nonatomic) <AWEIMAlbumSlidingTabItemViewDelegate> delegate;
- (void)p_setupViews;
- (void)p_setupConstraint;
- (void)isSelected:;
- (void)p_updateLabelText:;
- (id)delegate;
- (void)setText:;
- (id)text;
- (void)setTitleLabel:;
- (id)initWithText:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (BOOL)selected;
- (BOOL)isAccessibilityElement;
- (void)handleTapGesture:;
@end
