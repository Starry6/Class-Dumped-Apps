@interface CDMonitorManager : NSObject
- (id)lastUpdate;
- (id)_monitorForStreamName:;
- (id)currentEvent;
- (void)setHistoricalDeletingHandler:;
- (BOOL)_hasMonitorForStreamName:;
- (BOOL)hasMonitor:;
- (id)lastUpdateForStream:;
- (void)start;
- (void)handleShutdownNotification;
- (id)_currentEventForStreamName:;
- (void)setHistoricalHandler:;
- (void)stop;
- (void)_updateForStreamName:;
- (void)populateCurrentValueForStreamName:;
- (void)removeMonitor:;
- (id)initWithEventStreams:domain:;
- (id)_allStreamNames;
- (void)setInstantHandler:;
- (void)_addMonitor:forStreamName:;
- (void)setInstantHandler:forStream:;
- (id)_allMonitors;
- (void)startMonitorForStream:;
- (void)setShutdownHandler:;
- (void)_stopMonitorForStreamName:;
- (void).cxx_destruct;
- (void)_setHistoricalHandler:forStreamName:;
- (id)_lastUpdateForStreamName:;
- (void)_removeMonitorForStreamName:;
- (void)update;
- (void)setHistoricalHandler:forStream:;
- (void)_startMonitorForStreamName:;
- (void)addMonitor:;
- (void)_setInstantHandler:forStreamName:;
- (void)deliverNotificationEvent:;
- (void)updateForStream:;
- (void)stopMonitorForStream:;
- (id)currentEventForStream:;
+ (id)monitorManagerForEventStreams:domain:;
@end
