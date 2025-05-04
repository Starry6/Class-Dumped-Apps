@interface AWEAudioInfoTrackManager : NSObject
@property (nonatomic) BOOL isObservingVolumeChangeFlag;
@property (nonatomic) NSString volumeChangeObserverIdentifier;
@property (nonatomic) double preVolumeBeforeChange;
@property (nonatomic) double newVolumeAfterChange;
@property (nonatomic) BOOL isHeadphonesOn;
- (BOOL)isHeadphonesOn;
- (void)p_addObserver;
- (void)setIsHeadphonesOn:;
- (void)p_removeObserver;
- (void)setNewVolumeAfterChange:;
- (void)setPreVolumeBeforeChange:;
- (void)setIsObservingVolumeChangeFlag:;
- (void)setVolumeChangeObserverIdentifier:;
- (void)trackVolumeChangeInfoWithPreVolume:newVolume:;
- (id)volumeChangeObserverIdentifier;
- (double)preVolumeBeforeChange;
- (BOOL)isObservingVolumeChangeFlag;
- (void)reportVolumeChangeInfo;
- (double)newVolumeAfterChange;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleAudioSessionRouteChangeNotification:;
+ (id)currentAwemeModel;
+ (id)sharedInstance;
@end
