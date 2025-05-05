@interface EKRequestAvailabilityOperation : NSOperation
@property (nonatomic) NSError error;
- (void)_finishWithError:;
- (id)init;
- (void)cancel;
- (void)start;
- (BOOL)isConcurrent;
- (void)setError:;
- (BOOL)isExecuting;
- (id)error;
- (BOOL)isFinished;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSource:startDate:endDate:ignoredEventID:addresses:resultsBlock:;
@end
