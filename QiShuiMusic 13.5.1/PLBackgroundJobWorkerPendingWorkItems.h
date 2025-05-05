@interface PLBackgroundJobWorkerPendingWorkItems : NSObject
@property (nonatomic) NSArray workItemsNeedingProcessing;
@property (nonatomic) PLBackgroundJobCriteria criteria;
- (id)criteria;
- (id)workItemsNeedingProcessing;
- (void).cxx_destruct;
- (id)initWithZeroWorkItems;
- (id)initWithCriteria:workItemsNeedingProcessing:;
@end
