@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell
@property (nonatomic) UIView wrappedView;
@property (nonatomic) {UIEdgeInsets=dddd} wrappedViewInsets;
- (id)initWithStyle:reuseIdentifier:;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:;
- (void)setWrappedViewInsets:;
- (id)wrappedView;
- (void).cxx_destruct;
- (void)_updateWrappedView;
- (void)_setIsCenterCell:shouldModifyAlphaOfView:;
- (void)setWrappedView:;
- (void)_updateWrappedViewFrame;
- (id)_anyDateLabel;
- (id)wrappedViewInsets;
@end
