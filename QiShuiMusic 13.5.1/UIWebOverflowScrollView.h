@interface UIWebOverflowScrollView : UIScrollView
@property (nonatomic) UIWebBrowserView webBrowserView;
@property (nonatomic) UIWebOverflowScrollListener scrollListener;
@property (nonatomic) UIWebOverflowContentView overflowContentView;
@property (nonatomic) CALayer webLayer;
@property (nonatomic) DOMNode node;
@property (nonatomic) BOOL beingRemoved;
- (id)node;
- (void)setContentOffset:;
- (void)dealloc;
- (void)setNode:;
- (id)superview;
- (void)replaceLayer:;
- (void)willBeRemoved;
- (BOOL)fixUpViewAfterInsertion;
- (id)webLayer;
- (void)setWebLayer:;
- (id)initWithLayer:node:webBrowserView:;
- (id)webBrowserView;
- (void)setWebBrowserView:;
- (id)scrollListener;
- (void)setScrollListener:;
- (id)overflowContentView;
- (void)setOverflowContentView:;
- (BOOL)isBeingRemoved;
- (void)setBeingRemoved:;
@end
