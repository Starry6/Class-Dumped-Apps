@interface CHHapticEngine : NSObject
@property (nonatomic) AVHapticPlayer player;
@property (nonatomic) BOOL running;
@property (nonatomic) CHMetrics metrics;
@property (nonatomic) BOOL activateAudioSessionOnStart;
@property (nonatomic) AVAudioSession avAudioSession;
@property (nonatomic) I audioSessionID;
@property (nonatomic) BOOL sessionIsShared;
@property (nonatomic) @? clientFinishedHandler;
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) Q currentPlayerBehavior;
@property (nonatomic) BOOL needsAudioPowerBudget;
@property (nonatomic) HapticServerConfig serverConfig;
@property (nonatomic) BOOL muteHapticsWhileRecordingAudio;
@property (nonatomic) BOOL followAudioRoute;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) NSArray availableLocalities;
@property (nonatomic) NSString locality;
@property (nonatomic) NSString priority;
@property (nonatomic) NSString hapticPowerUsage;
@property (nonatomic) NSString audioPowerUsage;
@property (nonatomic) NSString usageCategory;
@property (nonatomic) double autoShutdownTimeout;
@property (nonatomic) double currentTime;
@property (nonatomic) @? stoppedHandler;
@property (nonatomic) @? resetHandler;
@property (nonatomic) BOOL playsHapticsOnly;
@property (nonatomic) BOOL playsAudioOnly;
@property (nonatomic) BOOL isMutedForAudio;
@property (nonatomic) BOOL isMutedForHaptics;
@property (nonatomic) BOOL autoShutdownEnabled;
- (unsigned int)audioSessionID;
- (void)setHighPriority:;
- (BOOL)resourceIsRegistered:;
- (id)locality;
- (id)init;
- (void)dealloc;
- (void)startWithCompletionHandler:;
- (id)metrics;
- (void)setRunning:;
- (BOOL)running;
- (id)serverConfig;
- (void)setTimer:;
- (BOOL)isAutoShutdownEnabled;
- (id)player;
- (void)stopWithCompletionHandler:;
- (BOOL)highPriority;
- (void).cxx_destruct;
- (void)stopPrewarm;
- (void)setResetHandler:;
- (void)handleMediaServerDeath:;
- (void)stopAndWait;
- (BOOL)startAndReturnError:;
- (id)timer;
- (double)currentTime;
- (id)resetHandler;
- (void)setAutoShutdownEnabled:;
- (id).cxx_construct;
- (id)priority;
- (void)setStoppedHandler:;
- (void)prewarmWithCompletionHandler:;
- (void)setFollowAudioRoute:;
- (BOOL)playsHapticsOnly;
- (void)setPlaysHapticsOnly:;
- (void)setPlaysAudioOnly:;
- (id)createPrivilegedPlayerWithPlayable:error:;
- (id)createPlayerWithPattern:error:;
- (id)initWithAudioSession:sessionIsShared:options:error:;
- (void)setMuteHapticsWhileRecordingAudio:;
- (void)notifyWhenPlayersFinished:;
- (unsigned long long)registerAudioResource:options:error:;
- (id)initWithAudioSessionID:error:;
- (id)createAdvancedPlayerWithRingtonePattern:error:;
- (id)createAdvancedPlayerWithRingtoneData:error:;
- (void)handleConnectionError;
- (double)getDurationForResource:;
- (id)createAdvancedPlayerWithVibePatternDictionary:error:;
- (id)createAdvancedPlayerWithPattern:error:;
- (BOOL)unregisterAudioResource:error:;
- (id)initWithOptions:error:;
- (id)initAndReturnError:;
- (id)initWithAudioSession:sessionIsShared:error:;
- (double)autoShutdownTimeout;
- (void)setAutoShutdownTimeout:;
- (BOOL)setupUnsharedAudioSession:isConstantVolume:needsAudioPowerBudget:error:;
- (BOOL)setupSystemSoundAudioSession:needsAudioPowerBudget:error:;
- (id)getUsageCategory:;
- (BOOL)setupEngineWithCategory:session:needsAudioPowerBudget:error:;
- (void)updateAudioConfigurations:session:;
- (void)dispatchOnLocal:;
- (void)setMetricsTestModeEnabled;
- (id)getMetricsForPlayer:;
- (id)hapticPowerUsage;
- (id)audioPowerUsage;
- (id)usageCategory;
- (void)handleMediaServerRecovery:;
- (BOOL)isBehaviorSet:;
- (void)toggleBehavior:set:;
- (BOOL)playsAudioOnly;
- (BOOL)muteHapticsWhileRecordingAudio;
- (BOOL)isMutedForAudio;
- (void)setIsMutedForAudio:;
- (BOOL)isMutedForHaptics;
- (void)setIsMutedForHaptics:;
- (BOOL)followAudioRoute;
- (id)availableLocalities;
- (BOOL)needsAudioPowerBudget;
- (void)connectAudioSession:;
- (void)disconnectAudioSession:;
- (unsigned int)getSessionIDFromAVAudioSession:;
- (long long)getReporterIDFromAVAudioSession:;
- (id)createHapticPlayerWithOptions:;
- (BOOL)finishInit:;
- (void)startIdleTimerWithHandler:;
- (void)beginIdleTimer;
- (void)cancelIdleTimer;
- (void)handleFinish:;
- (void)updateEngineBehavior;
- (void)updateEngineBehaviorWithError:;
- (id)createOptionsFromAudioSessionID:shared:;
- (void)storeOptions:;
- (BOOL)doInit:sessionIsShared:options:error:;
- (id)initWithAudioSession:error:;
- (void)reconfigureAudioSession;
- (BOOL)doInitWithOptions:error:;
- (void)doStartWithCompletionHandler:;
- (BOOL)doStartEngineAndWait:;
- (BOOL)doStopEngineAndWait:;
- (void)doStopWithCompletionHandler:;
- (BOOL)isResourceLoopEnabled:;
- (id)doFindPublicAudioResourceID:;
- (void)addPublicAudioResourceID:withURL:options:;
- (BOOL)hasPublicAudioResourceID:;
- (unsigned long long)idForPublicAudioResourceURL:withOptions:;
- (void)removePublicAudioResourceID:;
- (void)doUnregisterAllPublicAudioResources;
- (BOOL)playPatternFromURL:error:;
- (BOOL)playPatternFromData:error:;
- (BOOL)doPlayPattern:error:;
- (id)stoppedHandler;
- (id)avAudioSession;
- (BOOL)sessionIsShared;
- (id)clientFinishedHandler;
- (void)setClientFinishedHandler:;
- (unsigned long long)currentPlayerBehavior;
- (void)setCurrentPlayerBehavior:;
- (BOOL)activateAudioSessionOnStart;
- (void)setActivateAudioSessionOnStart:;
- (void)dispatchSyncOnLocal:;
- (BOOL)checkEngineStateOnStart:;
- (BOOL)checkEngineRunning:;
- (BOOL)notifyPlayerStarted:atTime:;
- (void)notifyPlayerStopped:atTime:;
- (id)getAvailableChannel:;
- (void)releaseChannel:;
- (BOOL)doReferenceAudioResourceByID:;
+ (BOOL)resourceIsRegistered:;
+ (void)lazyInitResourceMap;
+ (void)dispatchOnGlobal:;
+ (void)clearResourceMap;
+ (unsigned long long)doRegisterAudioResource:options:fromPattern:player:error:;
+ (BOOL)supports1stPartyHaptics;
+ (id)capabilitiesForHardware;
+ (BOOL)supportsHapticServer;
+ (BOOL)doUnregisterAudioResource:fromPattern:player:error:;
@end
