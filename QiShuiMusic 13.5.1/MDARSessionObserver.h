@interface MDARSessionObserver : NSObject
@property (nonatomic) ARSession session;
@property (nonatomic) ^{ARSessionObserver=^^?} observer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSession:;
- (void)session:didChangeGeoTrackingStatus:;
- (void)setObserver:;
- (id)initWithObserver:onQueue:;
- (id)session;
- (void).cxx_destruct;
- (void)session:didUpdateAnchors:;
- (void)session:didUpdateFrame:;
- (id)observer;
@end
