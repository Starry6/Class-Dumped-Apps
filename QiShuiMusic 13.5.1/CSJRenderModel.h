@interface CSJRenderModel : NSObject
@property (nonatomic) q renderSequence;
@property (nonatomic) q backupRenderControl;
@property (nonatomic) q renderThread;
@property (nonatomic) q reserveTime;
@property (nonatomic) q retryEnable;
@property (nonatomic) float retryTimeout;
- (void)setReserveTime:;
- (void)setRetryEnable:;
- (long long)backupRenderControl;
- (BOOL)enableRetry;
- (BOOL)isH5Render;
- (long long)renderSequence;
- (long long)renderThread;
- (long long)reserveTime;
- (long long)retryEnable;
- (float)retryTimeout;
- (void)setBackupRenderControl:;
- (void)setRenderSequence:;
- (void)setRenderThread:;
- (void)setRetryTimeout:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
@end
