@interface NPPlaySessionInfo : NSObject
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSInteger stallTotalCount;
@property (nonatomic) NSInteger retryTotalCount;
@property (nonatomic) q stopTimestamp;
- (int)retryTotalCount;
- (int)stallTotalCount;
- (void)setRetryTotalCount:;
- (void)setStallTotalCount:;
- (void)setSessionId:;
- (id)sessionId;
- (void).cxx_destruct;
- (void)setStopTimestamp:;
- (long long)stopTimestamp;
@end
