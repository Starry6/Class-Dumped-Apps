@interface AWEInteractionElementPopover : UIView
- (void)animationDidStop:finished:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)handleLongPressWithGes:;
- (void)willResignActiveNotificationWithNotice:;
- (void)showWithContext:target:alignView:interactionContainer:didGetFocus:didLoseFocus:didDismiss:;
- (void)remove;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
@end
