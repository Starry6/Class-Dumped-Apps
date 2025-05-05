@interface MKPolygonView : MKOverlayPathView
@property (nonatomic) MKPolygon polygon;
- (void)createPath;
- (void)strokePath:inContext:;
- (void)fillPath:inContext:;
- (id)initWithPolygon:;
- (id)polygon;
@end
