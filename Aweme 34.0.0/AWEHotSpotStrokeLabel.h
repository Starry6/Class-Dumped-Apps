@interface AWEHotSpotStrokeLabel : UILabel
@property (nonatomic) UIColor strokeColor;
@property (nonatomic) double strokeWidth;
- (id)initWithStrokeColor:andStrokeWidth:;
- (void)setStrokeWidth:;
- (void)setStrokeColor:;
- (double)strokeWidth;
- (void)drawTextInRect:;
- (id)strokeColor;
- (void).cxx_destruct;
@end
