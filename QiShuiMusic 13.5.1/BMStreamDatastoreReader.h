@interface BMStreamDatastoreReader : NSObject
@property (nonatomic) BMStreamDatastore inner;
@property (nonatomic) BOOL canReadOrPruneData;
- (id)streamIdentifier;
- (id)newEnumeratorFromStartTime:endTime:maxEvents:lastN:options:;
- (id)fetchEventsFrom:to:options:;
- (id)newEnumeratorFromStartTime:;
- (id)newEnumeratorFromStartTime:options:;
- (id)initWithStream:config:;
- (id)newEnumeratorFromStartTime:endTime:maxEvents:options:;
- (Class)eventBodyClass;
- (BOOL)canReadOrPruneData;
- (id)newEnumeratorFromBookmark:;
- (id)fetchEventsFrom:to:;
- (id)newEnumeratorFromBookmark:options:;
- (void).cxx_destruct;
- (id)inner;
@end
