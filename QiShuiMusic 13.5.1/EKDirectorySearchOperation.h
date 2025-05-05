@interface EKDirectorySearchOperation : NSOperation
@property (nonatomic) BOOL numberOfMatchesExceededLimit;
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
- (id)_recordTypes;
- (id)initWithSource:query:resultsBlock:;
- (void)_processResults:;
- (id)_processResults:class:;
- (BOOL)numberOfMatchesExceededLimit;
- (void)setNumberOfMatchesExceededLimit:;
+ (BOOL)isSupported;
@end
