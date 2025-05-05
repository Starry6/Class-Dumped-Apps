@interface AVMusicTrackEventIterator : NSObject
- (int)previousEvent;
- (int)nextEvent;
- (BOOL)setEventTime:;
- (id)initWithImpl:;
- (void)seek:;
- (void)getEventInfo:outEventType:eventData:dataSize:;
- (BOOL)setEventInfo:data:;
- (void)deleteEvent;
- (BOOL)hasPreviousEvent;
- (BOOL)hasNextEvent;
- (BOOL)hasCurrentEvent;
@end
