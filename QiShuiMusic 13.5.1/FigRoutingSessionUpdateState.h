@interface FigRoutingSessionUpdateState : NSObject
@property (nonatomic) ^{OpaqueFigRoutingSession=} newSession;
@property (nonatomic) ARPPredictionContext predictionContext;
- (void)dealloc;
- (id)initWithNewSession:;
- (id)newSession;
- (void)setNewSession:;
- (id)predictionContext;
- (void)setPredictionContext:;
@end
