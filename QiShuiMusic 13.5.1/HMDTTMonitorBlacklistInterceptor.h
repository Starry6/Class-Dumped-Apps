@interface HMDTTMonitorBlacklistInterceptor : NSObject
@property (nonatomic) <HMDTTMonitorInterceptor> nextInteceptor;
@property (nonatomic) NSString appID;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBlacklist;
- (void)configDidUpdate:;
- (id)initWithQuene:;
- (id)nextInteceptor;
- (void)setNextInteceptor:;
- (void)setNextInterceptor:;
- (void)dealloc;
- (void)handleRequest:;
- (id)serialQueue;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (id)logTypeBlacklist;
+ (id)serviceTypeBlacklist;
@end
