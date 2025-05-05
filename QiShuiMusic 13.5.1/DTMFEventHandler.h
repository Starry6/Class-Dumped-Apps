@interface DTMFEventHandler : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)insertStartBlockWithEvent:volume:timestamp:;
- (BOOL)insertStopBlockWithEndTimestamp:withPauseCompleteTimestamp:;
- (void)sendDTMFEvent:atTimestamp:withSampleRate:;
- (void)sendingDTMFEventWithTimeStamp:interval:RTPHandle:;
- (void)stopDTMFEventAtTimestamp:withSampleRate:;
- (BOOL)shouldTransmitDTMFWithTimestamp:;
- (int)constructDTMFEventPacketWithEvent:volume:durationCounter:interval:dataBuffer:isEnd:;
- (BOOL)shouldAdjustForLastPauseCompleteTimestamp:;
@end
