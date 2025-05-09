@interface MPVolumeControllerSystemDataSource : NSObject
@property (nonatomic) NSString volumeAudioCategory;
@property (nonatomic) NSSet volumeAudioCategories;
@property (nonatomic) BOOL forceAVSystemController;
@property (nonatomic) <MPVolumeControllerDataSourceDelegate> delegate;
@property (nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (nonatomic) NSString volumeControlLabel;
@property (nonatomic) BOOL volumeControlAvailable;
@property (nonatomic) I volumeControlCapabilities;
@property (nonatomic) float volume;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL volumeWarningEnabled;
@property (nonatomic) q volumeWarningState;
@property (nonatomic) float EUVolumeLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reload;
- (id)volumeControlLabel;
- (void)reloadWarning;
- (void)adjustVolumeValue:;
- (void)_mediaServerDiedNotification:;
- (BOOL)isVolumeControlAvailable;
- (id)init;
- (float)volume;
- (void)dealloc;
- (void)setVolumeAudioCategory:;
- (void)beginIncreasingRelativeVolume;
- (id)_reloadQueue;
- (void)setVolume:;
- (void)setDelegate:;
- (void)setMuted:;
- (id)volumeAudioCategory;
- (BOOL)isMuted;
- (unsigned int)volumeControlCapabilities;
- (BOOL)volumeWarningEnabled;
- (void)_tearDown;
- (id)volumeAudioCategories;
- (id)initCommon;
- (BOOL)applicationShouldOverrideHardwareVolumeBehavior;
- (void)setForceAVSystemController:;
- (void)_systemVolumeDidChange:;
- (void)_systemMuteDidChange:;
- (void)_updateRouteLabelForRoute:;
- (void)initializeVolume;
- (id)delegate;
- (BOOL)forceAVSystemController;
- (id)initWithVolumeAudioCategory:;
- (void).cxx_destruct;
- (void)_volumeDidChangeNotification:;
- (void)_setup;
- (id)_mediaPlaybackVolumeAudioCategory;
- (id)description;
- (float)EUVolumeLimit;
- (void)updateVolume:;
- (void)beginDecreasingRelativeVolume;
- (void)_volumeControlCapabilitiesDidChangeNotification:;
- (void)getVolumeValueWithCompletion:;
- (void)endDecreasingRelativeVolume;
- (long long)volumeWarningState;
- (void)_routeDidChangeNotification:;
- (id)initWithVolumeAudioCategories:;
- (void)endIncreasingRelativeVolume;
- (void)updateVolumeControlCapabilities:;
@end
