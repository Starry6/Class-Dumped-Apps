@interface BDXCategoryIndicatorBallView : BDXCategoryIndicatorComponentView
@property (nonatomic) UIView smallBall;
@property (nonatomic) UIView bigBall;
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) double ballScrollOffsetX;
- (id)bigBall;
- (double)ballScrollOffsetX;
- (void)configureIndicatorBall;
- (id)getBezierPathWithSmallCir:andBigCir:;
- (void)jx_contentScrollViewDidScroll:;
- (void)jx_refreshState:;
- (void)jx_selectedCell:;
- (void)setBallScrollOffsetX:;
- (void)setBigBall:;
- (void)setSmallBall:;
- (id)smallBall;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (id)shapeLayer;
- (void)setShapeLayer:;
- (void).cxx_destruct;
@end
