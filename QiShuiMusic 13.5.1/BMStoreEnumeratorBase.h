@interface BMStoreEnumeratorBase : NSObject
@property (nonatomic) BMFrameStore currentFrameStore;
@property (nonatomic) BMStreamMetadata metadata;
@property (nonatomic) BMStreamDatastoreBase ds;
@property (nonatomic) BMStoreBookmark bookmark;
- (id)currentFrameStore;
- (id)ds;
- (id)nextEvent;
- (id)bookmark;
- (id)peekEvent;
- (BOOL)isDataAccessible;
- (id)metadata;
- (id)initWithStreamDatastore:currentFrameStore:frameStoreOffset:iterationStartTime:endTime:maxEvents:lastN:options:;
- (BOOL)advanceBookmarkToStartTime:eventsFound:lastN:;
- (id)copyNextEventAndMoveBookmark:;
- (void)nextEventWithContext:;
- (id)initWithStreamDatastore:startTime:endTime:maxEvents:lastN:options:;
- (void).cxx_destruct;
- (id)_eventWithFrameStore:frame:error:;
- (id)copyNextEventAndMoveBookmark:makeEvent:;
- (void)setFrameStoreOffset:;
- (id)initWithStreamDatastore:bookmark:options:;
@end
