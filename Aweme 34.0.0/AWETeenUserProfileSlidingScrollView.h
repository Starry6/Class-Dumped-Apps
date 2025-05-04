@interface AWETeenUserProfileSlidingScrollView : AWESlidingScrollView
@property (nonatomic) <AWETeenUserProfileSlidingScrollViewDelegate> userProfileDelegate;
- (BOOL)shouldPan:;
- (id)userProfileDelegate;
- (void)setUserProfileDelegate:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void).cxx_destruct;
@end
