@interface DOCOperationBuffer : NSObject
@property (nonatomic) BOOL locked;
@property (nonatomic) NSString label;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSObject<OS_dispatch_queue> targetQueue;
- (id)initWithLabel:;
- (void)signal;
- (id)targetQueue;
- (void)setTargetQueue:;
- (void)setLabel:;
- (id)label;
- (void)setLocked:;
- (void).cxx_destruct;
- (BOOL)locked;
- (void)setQueue:;
- (id)queue;
- (void)buffer:;
- (id)initWithLabel:targetQueue:;
@end
