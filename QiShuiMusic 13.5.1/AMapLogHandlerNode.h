@interface AMapLogHandlerNode : NSObject
@property (nonatomic) AMapLogHandler logHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> logHandlerQueue;
- (id)initWithLogger:logHandlerQueue:;
- (id)logHandlerQueue;
- (id)logHandler;
- (void).cxx_destruct;
+ (id)nodeWithLogger:logHandlerQueue:;
@end
