@interface MTEventRecorder : MTObject
@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (nonatomic) NSMutableArray eventListeners;
@property (nonatomic) <MTEventRecorderDelegate> delegate;
- (BOOL)monitorsLifecycleEvents;
- (void)setMonitorsLifecycleEvents:;
- (id)init;
- (void)dealloc;
- (void)addEventListener:;
- (id)recordEvent:;
- (void)setDelegate:;
- (void)removeEventListener:;
- (id)delegate;
- (void).cxx_destruct;
- (id)eventListeners;
- (id)recordEvent:toTopic:;
- (id)sendMethod;
- (id)flushUnreportedEvents;
- (id)initWithMetricsKit:;
- (void)maybeSubscribeToFlushNotification;
- (id)recordEvent:shouldSkipValidation:;
- (id)_flushUnreportedEventsUsingRecorder:;
- (id)_recordEvent:usingRecorder:;
- (id)_recordEvent:toTopic:usingRecorder:;
- (void)setEventListeners:;
- (id)_amsDelegate;
+ (id)_metricsDataApplyingAllowlisting:usingRecorder:;
+ (id)_compositePromiseWithPromises:resolvingResultFromPromise:;
@end
