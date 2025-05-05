@interface SYBacklinkMonitorServiceHandle : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> handleQueue;
@property (nonatomic) NSInteger processIdentifier;
@property (nonatomic) <SYBacklinkMonitorServiceHandleDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithConnection:queue:;
- (id)indicatorCoverageWithCompletion:;
- (void)dealloc;
- (id)handleQueue;
- (void)setDelegate:;
- (id)setIndicatorCoverage:;
- (void)setFilterCache:;
- (int)processIdentifier;
- (void)setHandleQueue:;
- (id)delegate;
- (id)connection;
- (void).cxx_destruct;
- (id)activeUserActivityDidChange:context:completion:;
- (void)setConnection:;
- (long long)_indicatorCoverage;
- (void)_killConnectionWithCallback;
+ (id)handleWithConnection:queue:;
@end
