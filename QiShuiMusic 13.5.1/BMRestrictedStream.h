@interface BMRestrictedStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (void)pruneWithPredicateBlock:;
- (id)init;
- (id)remoteDevices;
- (id)publishersForRemoteDevices:startTime:includeLocal:pipeline:;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (void)pruneLocalAndRemoteEventsWithReason:usingPredicateBlock:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)initWithIdentifier:segmentSize:;
- (id)identifier;
- (id)initWithIdentifier:segmentSize:pruningPolicy:;
- (void).cxx_destruct;
- (id)source;
- (id)initWithIdentifier:;
@end
