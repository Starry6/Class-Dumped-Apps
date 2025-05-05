@interface HMDTTMonitorTrackerInterceptor : NSObject
@property (nonatomic) HMDTTMonitorTracker tracker;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) <HMDTTMonitorInterceptor> nextInteceptor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTracker:queue:;
- (id)nextInteceptor;
- (void)setNextInteceptor:;
- (void)setNextInterceptor:;
- (void)setTracker:;
- (void)handleRequest:;
- (id)tracker;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
@end
