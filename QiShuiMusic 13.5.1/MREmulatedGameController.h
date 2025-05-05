@interface MREmulatedGameController : NSObject
@property (nonatomic) GCController controller;
@property (nonatomic) NSInteger profile;
@property (nonatomic) double buttonAUpDelay;
@property (nonatomic) <MREmulatedGameControllerDelegate> delegate;
- (id)initWithProperties:;
- (void)dealloc;
- (void)setDelegate:;
- (int)profile;
- (id)delegate;
- (void)setController:;
- (void).cxx_destruct;
- (id)controller;
- (void)setButtonAUpDelay:;
- (double)buttonAUpDelay;
- (void)sendGameControllerEvent:;
- (void)_handleGameControllerDidChange:;
@end
