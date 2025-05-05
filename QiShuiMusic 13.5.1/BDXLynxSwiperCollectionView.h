@interface BDXLynxSwiperCollectionView : UICollectionView
@property (nonatomic) UIView bounceBeginView;
@property (nonatomic) UIView bounceEndView;
@property (nonatomic) double customDuration;
@property (nonatomic) BOOL duringCustomScroll;
@property (nonatomic) Q touchBehavior;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bounceBeginView;
- (void)addBouncesView:and:;
- (id)bounceEndView;
- (double)customDuration;
- (void)decelerateToContentOffset:duration:;
- (BOOL)duringCustomScroll;
- (void)setBounceBeginView:;
- (void)setBounceEndView:;
- (void)setContentOffset:withDuration:interception:;
- (void)setCustomDuration:;
- (void)setDuringCustomScroll:;
- (void)setContentOffset:;
- (void)layoutSubviews;
- (void)setContentOffset:animated:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void).cxx_destruct;
- (unsigned long long)touchBehavior;
- (void)setTouchBehavior:;
@end
