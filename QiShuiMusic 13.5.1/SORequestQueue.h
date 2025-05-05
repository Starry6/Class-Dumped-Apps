@interface SORequestQueue : NSObject
@property (nonatomic) @? processItemBlock;
- (void)enqueueRequest:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:;
- (unsigned long long)queueCount;
- (void)processNextRequest;
- (void)removeAllRequestsWithBlock:;
- (void)_processItem:;
- (void)_itemCompleted;
- (id)processItemBlock;
- (void)setProcessItemBlock:;
+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:;
+ (void)removeQueueWithIdentifier:;
@end
