@interface BMStreamTombstoneEventDatastore : BMStreamDatastoreBase
- (id)newEnumeratorFromStartTime:;
- (void)enumerateEventsFrom:to:options:usingBlock:;
- (id)newEnumeratorFromStartTime:options:;
- (BOOL)writeEventWithEventBody:timestamp:outBookmark:;
- (BOOL)deleteEventAtBookmark:outTombstoneBookmark:;
- (id)newEnumeratorFromBookmark:;
- (id)newEnumeratorFromBookmark:options:;
- (void).cxx_destruct;
- (BOOL)writeTombstoneEvent:outTombstoneBookmark:;
- (id)originalEventFromTombstoneEvent:;
- (id)initWithStream:streamPath:permission:config:streamDatastore:;
@end
