@interface MRCompanionConnectionController : NSObject
@property (nonatomic) MRAVEndpoint companionEndpoint;
@property (nonatomic) <MRCompanionConnectionControllerDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)debugDescription;
- (id)delegate;
- (void).cxx_destruct;
- (void)_handleCompanionDeviceConnectedNotification:;
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:;
- (void)setCompanionEndpoint:;
- (BOOL)_shouldAttemptToDiscoverAndConnectToCompanion;
- (void)_maybeAttemptToDiscoverAndConnectToCompanionWithReason:;
- (id)companionEndpoint;
@end
