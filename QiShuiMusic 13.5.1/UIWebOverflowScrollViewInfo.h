@interface UIWebOverflowScrollViewInfo : NSObject
@property (nonatomic) UIWebOverflowScrollView scrollView;
@property (nonatomic) UIView oldSuperview;
- (void)setScrollView:;
- (void)dealloc;
- (id)initWithScrollView:;
- (id)scrollView;
- (id)oldSuperview;
- (void)setOldSuperview:;
@end
