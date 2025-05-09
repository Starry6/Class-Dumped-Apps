@interface PKPencilTouchDetectionService : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) BOOL isListening;
@property (nonatomic) FBSDisplayLayoutMonitor displayLayoutMonitor;
@property (nonatomic) BOOL wereFrontBoardOverlaysEnabled;
@property (nonatomic) PKPencilTouchDetectionGestureRecognizer detectionGesture;
@property (nonatomic) NSUserDefaults pencilDefaults;
@property (nonatomic) NSMutableDictionary timestamps;
@property (nonatomic) NSDictionary userInfoForNotification;
@property (nonatomic) double activePencilUsageTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)isListening;
- (void)setDisplayLayoutMonitor:;
- (void)setIsListening:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (id)displayLayoutMonitor;
- (void).cxx_destruct;
- (void)reset:;
- (void)setListener:;
- (id)timestamps;
- (void)_nop:;
- (void)setTimestamps:;
- (id)userInfoForNotification;
- (void)loadDefaultsIfNecessary;
- (void)updateTimestampForType:;
- (void)pencilType:hasRecentlyBeenUsedWithCompletionHandler:;
- (void)resumeConnectionIfIdle;
- (void)loadTimestampsIfNecessary;
- (void)persistTimestamps;
- (BOOL)timestampIndicatesRecentUsage:;
- (void)postUpdateNotificationIfNecessary;
- (void)_updateActivePencilUsageForTouchType:;
- (id)stringForTouchDetectionPencilType:;
- (BOOL)wereFrontBoardOverlaysEnabled;
- (void)setWereFrontBoardOverlaysEnabled:;
- (id)detectionGesture;
- (void)setDetectionGesture:;
- (id)pencilDefaults;
- (void)setPencilDefaults:;
- (void)setUserInfoForNotification:;
- (double)activePencilUsageTimestamp;
- (void)setActivePencilUsageTimestamp:;
+ (id)sharedInstance;
+ (void)beginObservingTouchesForDetection;
@end
