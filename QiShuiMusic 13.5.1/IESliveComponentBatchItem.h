@interface IESliveComponentBatchItem : NSObject
@property (nonatomic) NSString serialName;
@property (nonatomic) IESliveComponentBatchItem previousBatchItem;
@property (nonatomic) IESliveComponentBatchItem nextBatchItem;
@property (nonatomic) NSMutableSet componentNames;
@property (nonatomic) q belongLvel;
@property (nonatomic) BOOL finished;
@property (nonatomic) NSMutableArray components;
@property (nonatomic) double finishedTime;
@property (nonatomic) double waitDuration;
- (long long)belongLvel;
- (id)componentNames;
- (id)nextBatchItem;
- (id)previousBatchItem;
- (id)serialName;
- (void)setBelongLvel:;
- (void)setComponentNames:;
- (void)setFinishedTime:;
- (void)setNextBatchItem:;
- (void)setPreviousBatchItem:;
- (void)setSerialName:;
- (void)setWaitDuration:;
- (double)waitDuration;
- (void)setFinished:;
- (id)components;
- (id)init;
- (void)setComponents:;
- (BOOL)finished;
- (void).cxx_destruct;
- (double)finishedTime;
@end
