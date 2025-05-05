@interface IESECRelationDashLineComponent : UIView
@property (nonatomic) CAShapeLayer dashLineLayer;
- (double)p_dashLineWidth;
- (id)dashLineLayer;
- (void)setDashLineLayer:;
- (void)updateUIWithModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)dashLine;
+ (id)dashLineWithPadding:width:;
+ (id)solidLineWithPadding:;
@end
