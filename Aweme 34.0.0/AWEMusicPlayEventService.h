@interface AWEMusicPlayEventService : HTSService
@property (nonatomic) double eventSingleDuration;
@property (nonatomic) double eventTotalDuration;
@property (nonatomic) double eventStarTime;
@property (nonatomic) double musicChangeTime;
@property (nonatomic) double playStartTime;
@property (nonatomic) double videoPlayStartTime;
@property (nonatomic) double playQualityStartTime;
@property (nonatomic) double fstFrameDuration;
@property (nonatomic) BOOL eventProgressBarMove;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (nonatomic) BOOL eventIsLyricMove;
@property (nonatomic) AWEMusicFeedViewModel currentModel;
@property (nonatomic) NSObject<MusicService> service;
@property (nonatomic) double playStallStartTime;
@property (nonatomic) BOOL progressBarMoved;
@property (nonatomic) BOOL prepareToPlay;
@property (nonatomic) NSInteger playActionTime;
@property (nonatomic) NSString lastModelKey;
@property (nonatomic) BOOL canReportVideoEvent;
@property (nonatomic) BOOL haveCalledMusicChanged;
@property (nonatomic) BOOL isFirstMusic;
@property (nonatomic) BOOL isMusicPlayComplete;
@property (nonatomic) double background_dur;
@property (nonatomic) double background_dur_start;
@property (nonatomic) q cacheSize;
@property (nonatomic) NSNumber volumeHandlerID;
@property (nonatomic) double volumeChangedInterval;
@property (nonatomic) double volumeStart;
@property (nonatomic) double volumeMin;
@property (nonatomic) double volumeMax;
@property (nonatomic) BOOL isPlayStarted;
@property (nonatomic) q stallAction;
@property (nonatomic) NSString page;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString previousPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (void)musicService:playStatusChanged:;
- (void)musicServiceMusicChanged:;
- (void)musicService:didFinishedWithError:;
- (void)musicServiceReadyToDisPlay:;
- (void)musicServiceReadyToPlay:;
- (void)musicServiceDidPause:pauseType:;
- (void)musicServiceDidStop:;
- (void)musicServiceDidSeek:;
- (void)musicService:didChangeStallState:actionType:reason:;
- (void)musicServiceWillGoPrevFromRemote:;
- (void)musicServiceWillGoNextFromRemote:;
- (BOOL)isPlayStarted;
- (void)setIsPlayStarted:;
- (id)initWithMusicService:;
- (void)videoPlayStart;
- (void)videoPlayEnd;
- (id)backup_event_params;
- (void)restore_event_params:;
- (double)playStartTime;
- (void)setPlayStartTime:;
- (void)receiveNotes:;
- (BOOL)eventBackgroundPlay;
- (void)setEventBackgroundPlay:;
- (void)setVolumeHandlerID:;
- (id)volumeHandlerID;
- (double)videoPlayStartTime;
- (id)enterMethod:;
- (void)calculateSingleDuration:;
- (void)audioOver:;
- (void)eventClear;
- (void)setEventProgressBarMove:;
- (void)setEventSingleDuration:;
- (void)setEventTotalDuration:;
- (void)setEventStarTime:;
- (void)setEventIsLyricMove:;
- (double)eventStarTime;
- (double)eventSingleDuration;
- (double)eventTotalDuration;
- (BOOL)eventProgressBarMove;
- (BOOL)eventIsLyricMove;
- (void)setPlayActionTime:;
- (void)updateCurrentVolume:;
- (void)audioFinishWithType:;
- (id)copyrightTypeOfModel:;
- (id)premiumType;
- (void)trackParamsAddExtra:;
- (void)trackEvent:params:model:;
- (double)playQualityStartTime;
- (void)setFstFrameDuration:;
- (double)musicChangeTime;
- (void)setPrepareToPlay:;
- (double)fstFrameDuration;
- (double)getCurrentSystemVolum;
- (void)setVolumeMax:;
- (void)setVolumeMin:;
- (void)setVolumeStart:;
- (BOOL)isFirstMusic;
- (void)reportAudioPlay;
- (void)reportVideoPlay;
- (void)setProgressBarMoved:;
- (BOOL)haveCalledMusicChanged;
- (void)setIsFirstMusic:;
- (void)setHaveCalledMusicChanged:;
- (void)setMusicChangeTime:;
- (void)setVideoPlayStartTime:;
- (void)setPlayQualityStartTime:;
- (void)setIsMusicPlayComplete:;
- (void)reportVideoPlayFinish;
- (void)reportVideoPlayTime:;
- (double)background_dur_start;
- (double)background_dur;
- (void)setBackground_dur:;
- (void)setBackground_dur_start:;
- (BOOL)progressBarMoved;
- (BOOL)isMusicPlayComplete;
- (double)volumeStart;
- (void)setPlayStallStartTime:;
- (void)setStallAction:;
- (double)playStallStartTime;
- (long long)stallAction;
- (BOOL)canReportVideoEvent;
- (id)lastModelKey;
- (void)setLastModelKey:;
- (int)playActionTime;
- (void)setCanReportVideoEvent:;
- (double)volumeChangedInterval;
- (void)setVolumeChangedInterval:;
- (id)page;
- (long long)cacheSize;
- (double)volumeMin;
- (void)dealloc;
- (id)service;
- (void)setService:;
- (double)volumeMax;
- (void).cxx_destruct;
- (void)setCacheSize:;
- (void)setPage:;
- (id)previousPage;
- (void)setPreviousPage:;
- (id)currentModel;
- (BOOL)prepareToPlay;
- (void)setCurrentModel:;
- (void)setupNotifications;
+ (void)markLyricsMoved;
+ (void)enterMusicScene;
+ (id)playEventServiceWithMusicService:;
@end
