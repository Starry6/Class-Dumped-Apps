@interface AWEIMRedPacketUploadManager : NSObject
@property (nonatomic) AWEIMRedPacketUploadConfig imageConfig;
@property (nonatomic) AWEIMRedPacketUploadConfig videoConfig;
@property (nonatomic) <AWEIMRedPacketUploadManagerProtocol> imageClient;
@property (nonatomic) <AWEIMRedPacketUploadManagerProtocol> videoClient;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} mutexLock;
- (void)setVideoConfig:;
- (id)videoConfig;
- (id)mutexLock;
- (void)setMutexLock:;
- (id)imageConfig;
- (void)setImageConfig:;
- (BOOL)checkConfigValid:;
- (void)setImageClient:;
- (void)setVideoClient:;
- (BOOL)isAuthError:;
- (void)uploadFileWithContext:leftRetry:;
- (id)imageClient;
- (id)videoClient;
- (id)init;
- (void).cxx_destruct;
- (void)fetchConfigWithCompletion:;
- (void)resetConfig;
+ (id)shareInstance;
@end
