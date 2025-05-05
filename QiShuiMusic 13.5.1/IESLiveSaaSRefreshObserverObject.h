@interface IESLiveSaaSRefreshObserverObject : NSObject
@property (nonatomic) UIScrollView scrollView;
- (id)initWithScrollView:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)scrollView;
- (void).cxx_destruct;
@end
