@interface IESLiveMessageListTableView : UITableView
@property (nonatomic) CAGradientLayer gradientMaskLayer;
@property (nonatomic) @? maskFrameBlock;
@property (nonatomic) <IESLiveListViewEventDelegate> listViewDelegate;
- (id)listViewDelegate;
- (id)maskFrameBlock;
- (BOOL)p_indexPathIsValid:;
- (void)scrollToBottomWithAnimated:;
- (void)scrollToRow:withAnimated:position:;
- (void)setListViewDelegate:;
- (void)setMaskFrameBlock:;
- (void)setTopGradientMask:frameBlock:;
- (id)init;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)gestureRecognizerShouldBegin:;
- (BOOL)accessibilityScroll:;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:;
@end
