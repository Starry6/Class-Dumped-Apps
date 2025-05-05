@interface CATIDSServiceConnectionDataAggregation : NSObject
@property (nonatomic) Q dataNumber;
@property (nonatomic) NSData totalData;
@property (nonatomic) <CATIDSServiceConnectionDataAggregationDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWorkQueue:;
- (void)updateWithDataContent:;
- (void)finishAggregating;
- (void)hydrateWithContentIfNeededWithContent:;
- (void)hydratePendingNumbersWithContent:;
- (void)hydrateStartingSequenceNumber:;
- (id)pendingSequenceNumbersDescription;
- (unsigned long long)dataNumber;
- (void)setDataNumber:;
- (id)totalData;
- (void)setTotalData:;
@end
