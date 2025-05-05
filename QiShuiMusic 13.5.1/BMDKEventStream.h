@interface BMDKEventStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (void)pruneWithPredicateBlock:;
- (id)init;
- (BOOL)pruneEventsWithError:predicateBlock:;
- (void)deleteEventsWithPredicate:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)initWithDKStreamIdentifier:contentProtection:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)identifier;
- (void)deleteLocalAndRemoteEventsWithReason:usingPredicateBlock:;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:;
- (void).cxx_destruct;
- (id)source;
- (id)initWithStreamIdentifier:contentProtection:;
+ (id)streamNameFromDKStreamName:;
@end
