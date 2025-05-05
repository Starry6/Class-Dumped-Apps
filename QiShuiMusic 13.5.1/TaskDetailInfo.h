@interface TaskDetailInfo : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) q netError;
@property (nonatomic) q httpCode;
@property (nonatomic) NSString dispatchedHost;
@property (nonatomic) double dispatchTime;
@property (nonatomic) BOOL sentAlready;
- (void)setSentAlready:;
- (id)dispatchedHost;
- (long long)netError;
- (BOOL)sentAlready;
- (void)setDispatchedHost:;
- (void)setNetError:;
- (void)setEnd:;
- (void)setStart:;
- (double)end;
- (id)init;
- (id)host;
- (double)start;
- (void)setHost:;
- (void)setHttpCode:;
- (long long)httpCode;
- (void).cxx_destruct;
- (double)dispatchTime;
- (void)setDispatchTime:;
@end
