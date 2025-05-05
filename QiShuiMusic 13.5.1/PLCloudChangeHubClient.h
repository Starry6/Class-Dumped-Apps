@interface PLCloudChangeHubClient : NSObject
@property (nonatomic) NSUUID uuid;
- (id)initWithUUID:;
- (id)init;
- (id)uuid;
- (void).cxx_destruct;
- (id)fetchPendingEventsSinceIndex:;
- (id)fetchResultsSinceIndex:;
- (id)resultsFromReply:sinceIndex:;
- (id)successfulResultWithEvents:changeHubEventIndex:;
- (id)unsuccesfulResultWithWithType:;
@end
