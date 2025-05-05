@interface DanceUIScrollViewDelegateHandler : NSObject
@property (nonatomic) UIScrollView scrollView;
- (void)__scrollViewDelegateDidChanged:;
- (void)addSlaveDelegate:;
- (void)handleCollectionViewDelegateChange;
- (void)removeSlaveDelegate:;
- (void)setDelegateWithMasterDelegate:slaveDelegates:;
- (void)setScrollView:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)scrollView;
- (void).cxx_destruct;
+ (id)handlerWithScrollView:;
@end
