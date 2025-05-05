@interface BMSocialHighlightFeedbackStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (id)init;
- (id)remoteDevices;
- (id)publishersForRemoteDevices:startTime:includeLocal:pipeline:;
- (void)deleteEventsWithPredicate:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)identifier;
- (id)initWithPruningPolicy:;
- (void)deleteLocalAndRemoteEventsWithReason:usingPredicateBlock:;
- (void)deleteLocalAndRemoteEventsWithPredicateBlock:;
- (void).cxx_destruct;
- (id)source;
+ (id)new;
@end
