@interface DispatchInfoGroup : NSObject
@property (nonatomic) NSString originalHost;
@property (nonatomic) NSString dispatchHost;
@property (nonatomic) NSNumber dispatchTime;
@property (nonatomic) BOOL sentAlready;
- (void)setSentAlready:;
- (id)dispatchHost;
- (BOOL)sentAlready;
- (void)setDispatchHost:;
- (void)setInfo2Task:;
- (id)init;
- (id)originalHost;
- (void).cxx_destruct;
- (void)setOriginalHost:;
- (id)dispatchTime;
- (void)setDispatchTime:;
@end
