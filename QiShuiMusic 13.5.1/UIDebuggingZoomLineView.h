@interface UIDebuggingZoomLineView : UIView
@property (nonatomic) UILabel lineLabel;
@property (nonatomic) {CGPoint=dd} start;
@property (nonatomic) {CGPoint=dd} end;
@property (nonatomic) Q direction;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
- (void)setEnd:;
- (void)setStart:;
- (unsigned long long)direction;
- (id)end;
- (id)rect;
- (void)drawRect:;
- (void)setDirection:;
- (id)start;
- (id)initWithFrame:;
- (void)setRect:;
- (void).cxx_destruct;
- (void)updateLabelFrame;
- (id)lineLabel;
- (void)setLineLabel:;
@end
