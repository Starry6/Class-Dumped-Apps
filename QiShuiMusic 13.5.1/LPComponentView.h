@interface LPComponentView : UIView
@property (nonatomic) <LPComponentViewHost> host;
- (id)init;
- (id)host;
- (BOOL)isFlipped;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutComponentView;
- (void)componentViewDidMoveToWindow;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:;
@end
