@interface AWENewChatDetailSlidingScrollView : AWESlidingScrollView
@property (nonatomic) <IESIMChatDetailSlidingScrollViewDelegate> chatDetailDelegate;
- (BOOL)shouldPan:;
- (id)chatDetailDelegate;
- (void)setChatDetailDelegate:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
@end
