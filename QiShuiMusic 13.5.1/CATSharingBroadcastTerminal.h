@interface CATSharingBroadcastTerminal : NSObject
@property (nonatomic) BOOL broadcasting;
@property (nonatomic) CATOperationQueue delegationQueue;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (BOOL)isBroadcasting;
- (void)addPrimitiveHandlers;
- (void)removePrimitiveHandlers;
- (id)initWithBroadcastPrimitives:delegate:delegationQueue:;
- (void)_invalidateWithError:removePrimitiveHandlers:deactivatePrimitives:;
- (void)sessionNeedsToDisplayPin:;
- (void)sessionHasPaired;
- (void)setBroadcasting:;
- (id)delegationQueue;
@end
