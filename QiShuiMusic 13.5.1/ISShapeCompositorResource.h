@interface ISShapeCompositorResource : NSObject
@property (nonatomic) IFColor fillColor;
@property (nonatomic) IFColor lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLineWidth:;
- (id)fillColor;
- (double)lineWidth;
- (void)setFillColor:;
- (id)lineColor;
- (void).cxx_destruct;
- (id)imageForSize:scale:;
- (id)_init;
- (void)setLineColor:;
+ (id)circleShape;
+ (id)continuousRoundedRectShape;
+ (double)continuousCornerRadiusForSize:;
@end
