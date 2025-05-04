@interface AWELivePageSnapControllerServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)aweAnimationCurve:;
- (void)configPageScrollView:withDuration:curveType:;
- (void)startScrollViewAnimating:velocity:targetContentOffset:;
- (void)startScrollViewAnimating:targetContentOffset:triggerDelegateCallback:;
- (id)targetContentOffsetWithScrollView:velocity:;
- (BOOL)scrollViewIsDecelerating:;
@end
