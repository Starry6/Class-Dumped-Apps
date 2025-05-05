@interface LabelNavRouteContextObserverProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)routeContextStateDidChange:;
- (id)initWithRouteContextChangeObserver:;
- (void).cxx_destruct;
- (void)stopObserving:;
- (void)startObserving:;
- (id).cxx_construct;
@end
