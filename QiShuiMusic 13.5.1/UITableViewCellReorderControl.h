@interface UITableViewCellReorderControl : UIControl
@property (nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
@property (nonatomic) UIColor accessoryTintColor;
- (BOOL)beginTrackingWithTouch:withEvent:;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)_imageView;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateImageView;
- (id)sizeThatFits:;
- (id)accessoryTintColor;
- (void).cxx_destruct;
- (void)setAccessoryTintColor:;
- (void)cancelTrackingWithEvent:;
- (void)endTrackingWithTouch:withEvent:;
- (BOOL)wantsMaskingWhileAnimatingDisabled;
- (BOOL)continueTrackingWithTouch:withEvent:;
- (BOOL)shouldTrack;
- (void)adjustLayoutForFocalRect:;
- (id)initWithTableViewCell:;
- (id)grabberImage;
@end
