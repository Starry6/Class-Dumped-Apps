@interface AWEUGImageXUploader : NSObject
@property (nonatomic) NSMutableArray clients;
@property (nonatomic) NSRecursiveLock lock;
- (void)startUpload:imageConfig:requestParams:authConfig:completion:;
- (void)setClients:;
- (id)clients;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
