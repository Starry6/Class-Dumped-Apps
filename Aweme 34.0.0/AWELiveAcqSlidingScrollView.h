@interface AWELiveAcqSlidingScrollView : AWESlidingScrollView
@property (nonatomic) <AWELiveAcqSlidingScrollViewDelegate> userProfileDelegate;
- (BOOL)shouldPan:;
- (id)userProfileDelegate;
- (void)setUserProfileDelegate:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
@end
