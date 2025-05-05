@interface LynxUIScrollerProxy : NSObject
@property (nonatomic) LynxUIScroller scroller;
@property (nonatomic) double rate;
@property (nonatomic) BOOL enableScrollY;
- (BOOL)enableScrollY;
- (id)initWithScroller:rate:enableScrollY:;
- (void)setEnableScrollY:;
- (void)setScroller:;
- (void)setRate:;
- (double)rate;
- (void)displayLinkAction;
- (void).cxx_destruct;
- (id)scroller;
@end
