@interface CATConcreteIDSServiceConnectionDataAggregator : NSObject
@property (nonatomic) <CATIDSServiceConnectionDataAggregatorDelegate> delegate;
@property (nonatomic) Q receivedSequenceNumber;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)receivedSequenceNumber;
- (void)dataAggregationCompleted:;
- (void)receiveDataContent:;
- (void)receiveExpectedSequenceNumber:;
- (id)initWithWorkQueue:timerSource:missingItemInterval:supportsSequenceCorrection:;
- (id)missingSequenceNumbers;
- (void)processNewDataWindowWithContent:;
- (void)updateExistingDataWindowWithContent:;
- (void)updateMissingContentTrackingForDataContent:;
- (void)missingContentTimerDidFire:fireCount:;
+ (id)missingContentTimerIdentifier;
@end
