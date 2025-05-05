@interface AVFigRoutingContextRouteChangeOperation : AVOperation
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
- (void)_routeChangeStartedWithID:;
- (id)initWithRoutingContext:successNotification:routeChangeBlock:;
- (void)_setResultIfNotAlreadySet:;
- (void)_routeChangeWithID:endedWithReason:;
- (void)_routeChangeComplete;
@end
