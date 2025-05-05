@interface BSMIGServer : NSObject
@property (nonatomic) NSInteger threadPriority;
@property (nonatomic) NSString threadName;
- (id)init;
- (void).cxx_destruct;
- (int)threadPriority;
- (void)setThreadPriority:;
- (id)initWithPortName:subsystem:separateThread:;
- (id)threadName;
@end
