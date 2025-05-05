@interface RouteRenderLayerObserverProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)polylineGroup:didRemovePolyline:;
- (id)initWithPolylineGroupObserver:;
- (void)polylineGroup:didFocusPolyline:;
- (void).cxx_destruct;
- (void)stopObserving:;
- (void)polylineGroup:didSelectPolyline:;
- (void)polylineGroup:didAddPolyline:;
- (void)startObserving:;
- (id).cxx_construct;
@end
