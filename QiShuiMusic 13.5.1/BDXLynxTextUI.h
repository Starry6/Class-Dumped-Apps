@interface BDXLynxTextUI : LynxUI
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configDisplaysAsynchronouslyIfNeed;
- (void)ensureSubSpan;
- (void)onReceiveUIOperation:;
- (void)setAsyncDisplayFromTTML:;
- (id)subSpanOf:withOrigin:;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)accessibilityText;
- (id)createView;
- (void)didRender;
- (void)frameDidChange;
+ (void)lynxLazyLoad;
@end
