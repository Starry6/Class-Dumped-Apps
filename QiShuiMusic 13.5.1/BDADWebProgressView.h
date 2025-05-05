@interface BDADWebProgressView : UIView
@property (nonatomic) UIView lineView;
@property (nonatomic) double currentProgress;
@property (nonatomic) double lineHeight;
@property (nonatomic) UIColor lineFillColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lineFillColor;
- (void)setLineFillColor:;
- (void)finished;
- (void)start;
- (void)setProgress:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)reset;
- (double)currentProgress;
- (double)lineHeight;
- (void)setLineHeight:;
- (id)lineView;
- (void)setLineView:;
- (void)webView:didFailLoadWithError:;
- (BOOL)webView:shouldStartLoadWithRequest:navigationType:;
- (void)webViewDidStartLoad:;
- (void)webViewDidFinishLoad:;
- (void)setupViews;
- (void)setCurrentProgress:;
@end
