@interface AWEDetailHalfScreenCrontroller : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hpSlidingScrollViewShouldScrollWithPanGestureRecognizer:reason:;
- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:reason:;
- (id)hpShouldPreventInteractionWithInteractionType:;
@end
