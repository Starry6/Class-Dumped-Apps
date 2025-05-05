@interface TTVideoEngineContentDataReporter : NSObject
@property (nonatomic) <TTVideoEngineNetClient> mNetClient;
@property (nonatomic) BOOL mCanceled;
@property (nonatomic) NSString mInitialUrl;
- (void)setMInitialUrl:;
- (BOOL)mCanceled;
- (id)mInitialUrl;
- (id)mNetClient;
- (void)setInitialUrl:;
- (void)setMCanceled:;
- (void)setMNetClient:;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startTask:;
+ (id)instance;
@end
