@interface IESSaaSVSComponentTracker : NSObject
@property (nonatomic) NSOperationQueue trackerQueue;
@property (nonatomic) NSMutableDictionary items;
- (void)checkThread:;
- (id)itemWithIndex:;
- (id)itemWithIndex:emptyCreate:;
- (id)itemWithIndex:traceInfoWithStage:;
- (void)recordIndex:endStage:;
- (void)recordIndex:enterMehod:;
- (void)recordIndex:metric:;
- (void)recordIndex:startStage:;
- (void)reportComponent:duration:name:;
- (void)reportIndex:;
- (void)setTrackerQueue:;
- (id)trackerQueue;
- (id)init;
- (id)items;
- (void)removeIndex:;
- (void)setItems:;
- (void).cxx_destruct;
@end
