@interface TLAccessQueue : NSObject
@property (nonatomic) NSString label;
- (void)assertNotRunningInAccessQueue;
- (id)initWithLabel:appendUUIDToLabel:;
- (id)label;
- (void)performSynchronousBlock:;
- (void).cxx_destruct;
- (void)_performSynchronousBlockInSerialQueue:;
- (void)performAsynchronousBlock:;
@end
