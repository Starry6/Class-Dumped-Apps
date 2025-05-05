@interface AVRoutingSession : NSObject
@property (nonatomic) AVRoutingSessionDestination destination;
@property (nonatomic) BOOL establishedAutomaticallyFromLikelyDestination;
- (id)init;
- (void)dealloc;
- (id)destination;
- (id)description;
- (id)initWithFigRoutingSession:;
- (BOOL)establishedAutomaticallyFromLikelyDestination;
@end
