@interface ATServerDelegatePriv : NSObject
- (int)muteSessionInput:clientPID:muted:;
- (int)handleInterruptionWithID:clientPID:interruptionState:interruptionInfo:;
- (id)spatialPreferencesForSession:contentType:;
- (void)setTelephonyClientSessionID:;
- (BOOL)spatialAudioEnabled:mode:;
- (BOOL)dolbyDigitalEncoderAvailable;
- (int)refreshRecordPermissions:;
- (void)handleCategoryOrModeChange:;
@end
