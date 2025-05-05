@interface BMTombstoneEventEnumerator : BMStoreEnumeratorBase
- (id)nextEvent;
- (id)peekEvent;
- (id)_originaleventWithFrameStore:frame:error:;
- (id)peekTombstoneEvent;
- (id)_eventWithFrameStore:frame:error:;
- (id)nextTombstoneEvent;
@end
