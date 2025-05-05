@interface BMStreamDatastorePruner : NSObject
@property (nonatomic) BOOL canReadOrPruneData;
- (id)streamIdentifier;
- (id)newEnumeratorFromStartTime:;
- (void)eventsFrom:to:shouldDeleteUsingBlock:;
- (id)initWithStream:config:;
- (Class)eventBodyClass;
- (BOOL)deleteEventAtBookmark:outTombstoneBookmark:;
- (void)eventsFrom:to:reason:shouldDeleteUsingBlock:;
- (BOOL)canReadOrPruneData;
- (void)syncMappedFiles;
- (id)newEnumeratorFromBookmark:;
- (id)fetchEventsFrom:to:;
- (void)removeEventsFrom:to:usingBlock:;
- (void)removeEventsFrom:to:callback:;
- (void).cxx_destruct;
- (void)removeEventsFrom:to:reason:usingBlock:;
@end
