@interface CMMagicMountManager : NSObject
@property (nonatomic) {CMMagicMountStateStruct=dB} currentMagicMountState;
- (id)init;
- (void)dealloc;
- (id)initPrivate;
- (void)deallocPrivate;
- (void)startMagicMountUpdatesToQueue:withHandler:;
- (void)stopMagicMountUpdates;
- (void)setNextUnmountAPWakeAllowed:;
- (void)sendMagicMountStateToClientPrivate;
- (void)onMagicMountData:;
- (id)currentMagicMountState;
- (void)feedMounted:apAwake:simulated:timestamp:;
- (void)startMagicMountUpdatesPrivateToQueue:withHandler:;
- (void)stopMagicMountUpdatesPrivate;
- (void)setNextUnmountAPWakeAllowedPrivate:;
+ (BOOL)isAvailable;
@end
