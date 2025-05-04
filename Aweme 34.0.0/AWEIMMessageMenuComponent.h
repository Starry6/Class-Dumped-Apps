@interface AWEIMMessageMenuComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMSelectableLabelPresenter currentSelectedPresenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didResetTextSelectWithHitPoint:pointInView:;
- (void)didStartDraggingGrabber;
- (void)showMenuFromLongPressGesture:;
- (void)menuDidSelectedWithType:;
- (void)clearTextSelectedState;
- (id)currentSelectedPresenter;
- (id)__getIMCustomMenuViewTapLocationInScreenAtLocation:locationInView:;
- (void)didEndTextSelectWithStartLocation:lowLocation:locationInView:tryStartLocationFirst:presenter:;
- (void)setCurrentSelectedPresenter:;
- (id)__getIMCustomMenuViewCellBubbleFrameInScreen:;
- (id)messageMenuTypeListWithMessage:conversation:isTextPartiallySelected:;
- (id)filterMenuItemIfNeeded:forMessage:;
- (void).cxx_destruct;
+ (id)lazyComponentWakeupInterface;
@end
