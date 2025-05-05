@interface IESSaaSTIMBatchUpdateAggregater : NSObject
@property (nonatomic) IESSaaSTIMBatchUpdateAggregaterRule rule;
@property (nonatomic) IESSaaSTIMThreadSafeMutableDictionary currentBatch;
@property (nonatomic) IESSaaSTIMGCDTimer timer;
@property (nonatomic) NSString name;
@property (nonatomic) <IESSaaSTIMBatchUpdateAggregaterDelegate> delegate;
- (void)cancelCurrentBatch;
- (void)finishCurrentBatch;
- (void)processBatch:;
- (id)rule;
- (void)timerFired:;
- (void)setName:;
- (void)setDelegate:;
- (void)addObject:forKey:;
- (void)setTimer:;
- (id)delegate;
- (void).cxx_destruct;
- (id)timer;
- (void)setRule:;
- (id)name;
- (id)initWithRule:;
- (id)currentBatch;
- (void)setCurrentBatch:;
- (void)_startTimerIfNeeded;
+ (id)sharedOperationQueue;
@end
