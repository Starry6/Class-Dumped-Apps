@interface AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation : AVOperation
@property (nonatomic) AVOutputContextDestinationChange result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)init;
- (void)dealloc;
- (void)start;
- (BOOL)isAsynchronous;
- (void)_setResultIfNotAlreadySet:;
- (id)initWithRoutingContext:routeChangeID:routeChangeBlock:;
- (void)_routeConfigUpdateWithID:endedWithReason:;
@end
