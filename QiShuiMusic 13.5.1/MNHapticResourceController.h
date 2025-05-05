@interface MNHapticResourceController : NSObject
@property (nonatomic) <MNHapticControllerDelegate> delegate;
@property (nonatomic) BOOL vibrating;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)triggerVibration;
- (void)stopVibrating;
- (BOOL)vibrating;
- (BOOL)playHapticSound:andReport:;
@end
