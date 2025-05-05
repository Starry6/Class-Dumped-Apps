@interface AVRoutingSessionManager : NSObject
@property (nonatomic) AVRoutingSession currentRoutingSession;
@property (nonatomic) NSArray likelyExternalDestinations;
@property (nonatomic) NSArray allLikelyDestinations;
@property (nonatomic) BOOL prefersLikelyDestinationsOverCurrentRoutingSession;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSessionManager:;
- (id)currentRoutingSession;
- (id)likelyExternalDestinations;
- (id)allLikelyDestinations;
- (BOOL)prefersLikelyDestinationsOverCurrentRoutingSession;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:;
- (BOOL)startRoutingSessionWithOutputDeviceDescriptions:error:;
- (BOOL)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:;
- (BOOL)stopSuppressingLikelyDestinationsAndReturnError:;
+ (id)longFormVideoRoutingSessionManager;
+ (BOOL)longFormVideoManagerCanHaveCurrentSessionWithDestinationOfType:subType:;
@end
