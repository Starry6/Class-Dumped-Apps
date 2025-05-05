@interface AVBorealisServerSpeakerStateHysteresisNotifier : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) float hysteresisDurationSeconds;
@property (nonatomic) BOOL speakerStateListeningEnabled;
@property (nonatomic) @? notificationBlock;
@property (nonatomic) BOOL lastStateSent;
@property (nonatomic) q generation;
- (void)callNotificationBlock:;
- (void)sendState;
- (id)initWithSerialQueue:hysteresisDurationSeconds:notificationBlock:;
- (void)stateChanged:;
- (void)setSpeakerStateListeningEnabled:;
- (BOOL)lastStateSent;
- (id)notificationBlock;
- (void)setLastStateSent:;
- (void)setGeneration:;
- (void).cxx_destruct;
- (BOOL)speakerStateListeningEnabled;
- (void)setQueue:;
- (long long)generation;
- (void)setHysteresisDurationSeconds:;
- (float)hysteresisDurationSeconds;
- (id)queue;
- (void)setNotificationBlock:;
@end
