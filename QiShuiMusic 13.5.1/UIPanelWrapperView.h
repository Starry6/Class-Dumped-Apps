@interface UIPanelWrapperView : UIView
- (void)layoutSubviews;
+ (id)wrapperViewForView:;
+ (id)existingWrapperViewForView:;
@end
