@interface RPMediaControlSession : NSObject
@property (nonatomic) Q mediaControlFlags;
@property (nonatomic) @? mediaControlFlagsChangedHandler;
@property (nonatomic) <RPMessageable> messenger;
- (id)init;
- (void)_activateWithCompletion:;
- (void)activateWithCompletion:;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)messenger;
- (void)invalidate;
- (void)setMessenger:;
- (void)_handleMediaControlEvent:;
- (void)mediaCaptionSettingGetFromDestinationID:completion:;
- (void)mediaCaptionSettingSet:destinationID:completion:;
- (void)mediaCommand:destinationID:completion:;
- (void)mediaSkipBySeconds:destinationID:completion:;
- (void)mediaGetVolumeFromDestinationID:completion:;
- (void)mediaSetVolume:destinationID:completion:;
- (unsigned long long)mediaControlFlags;
- (id)mediaControlFlagsChangedHandler;
- (void)setMediaControlFlagsChangedHandler:;
@end
