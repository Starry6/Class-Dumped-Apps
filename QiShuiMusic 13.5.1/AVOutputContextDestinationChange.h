@interface AVOutputContextDestinationChange : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSString cancellationReason;
- (id)init;
- (void)dealloc;
- (void)markAsFinished;
- (id)description;
- (long long)status;
- (id)cancellationReason;
- (void)markAsInProgress;
- (void)markAsFailed;
- (void)markAsCancelledWithReason:;
- (void)_setStatus:cancellationReason:;
- (void)changeToTerminalStatusBasedOnRouteChangeEndedReason:;
- (void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:;
@end
