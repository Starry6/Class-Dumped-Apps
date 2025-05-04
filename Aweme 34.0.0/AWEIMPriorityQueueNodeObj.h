@interface AWEIMPriorityQueueNodeObj : NSObject
@property (nonatomic) <AWEIMSyncPriorityDispatchObjectProtocol> cls;
@property (nonatomic) Q priorityValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithPriority:cls:;
- (id)cls;
- (void).cxx_destruct;
- (unsigned long long)priorityValue;
- (void)setPriorityValue:;
- (void)setCls:;
@end
