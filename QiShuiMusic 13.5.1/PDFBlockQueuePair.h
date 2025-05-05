@interface PDFBlockQueuePair : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (id)block;
- (void).cxx_destruct;
- (id)queue;
- (id)initWithBlock:andQueue:;
+ (id)blockQueuePairWithBlock:andQueue:;
@end
