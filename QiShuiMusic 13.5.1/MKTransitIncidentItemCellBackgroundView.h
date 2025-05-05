@interface MKTransitIncidentItemCellBackgroundView : UIView
@property (nonatomic) q position;
@property (nonatomic) UIColor fillColor;
@property (nonatomic) UIColor strokeColor;
- (void)setPosition:;
- (long long)position;
- (void)drawRect:;
- (id)fillColor;
- (void)setStrokeColor:;
- (void)setFillColor:;
- (id)strokeColor;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
@end
