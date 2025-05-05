@interface AXMBrailleEdgeDetectorOptions : NSObject
@property (nonatomic) AXMBrailleCanvasDescription canvasDescription;
@property (nonatomic) double zoomLevel;
@property (nonatomic) {CGPoint=dd} origin;
@property (nonatomic) double edgeStrength;
@property (nonatomic) BOOL invert;
- (double)zoomLevel;
- (void)setZoomLevel:;
- (void)setOrigin:;
- (id)initWithCoder:;
- (id)origin;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)invert;
- (id)description;
- (void)setInvert:;
- (id)initWithCanvasDescription:;
- (double)edgeStrength;
- (void)setEdgeStrength:;
- (id)canvasDescription;
- (void)setCanvasDescription:;
+ (BOOL)supportsSecureCoding;
@end
