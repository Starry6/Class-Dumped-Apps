@interface MFComposeScrollView : UIScrollView
@property (nonatomic) BOOL subviewsDisabled;
@property (nonatomic) BOOL shouldScrollToFirstResponder;
- (void)willRemoveSubview:;
- (void)setContentOffset:animated:;
- (void)didAddSubview:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)setSubviewsDisabled:;
- (void)disableSubview:;
- (void)enableSubview:;
- (void)beginBlockingScroll;
- (void)endBlockingScroll;
- (BOOL)subviewsDisabled;
- (BOOL)shouldScrollToFirstResponder;
- (void)setShouldScrollToFirstResponder:;
@end
