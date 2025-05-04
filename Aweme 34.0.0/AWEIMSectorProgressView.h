@interface AWEIMSectorProgressView : UIView
@property (nonatomic) double progress;
@property (nonatomic) double lineWidth;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIColor strokeColor;
- (void)setLineWidth:;
- (void)setFillColor:;
- (id)fillColor;
- (double)lineWidth;
- (void)setStrokeColor:;
- (id)strokeColor;
- (void)drawRect:;
- (id)initWithFrame:;
- (double)progress;
- (void).cxx_destruct;
- (void)setProgress:;
@end
