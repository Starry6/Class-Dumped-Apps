@interface BDARVPlayerMonitor : NSObject
@property (nonatomic) BDARVPlayerContext context;
@property (nonatomic) <BDARVPlayerState> stateSubject;
@property (nonatomic) NSString logExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)emitEvnet:payload:;
- (id)logExtra;
- (id)monitorCategoryData;
- (id)monitorExtraData;
- (void)playerLoadError:;
- (void)playerPlayEffectCheck;
- (void)sendMonitorWithEvent:;
- (void)setLogExtra:;
- (void)setStateSubject:;
- (id)stateSubject;
- (BOOL)supportEvent:;
- (id)supportEvents;
- (id)init;
- (id)context;
- (void)applicationWillTerminate:;
- (void).cxx_destruct;
- (void)setContext:;
@end
