@interface MKPolylineView : MKOverlayPathView
@property (nonatomic) MKPolyline polyline;
- (void)createPath;
- (void)drawMapRect:zoomScale:inContext:;
- (id)polyline;
- (id)initWithPolyline:;
@end
