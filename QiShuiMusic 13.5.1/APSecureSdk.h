@interface APSecureSdk : NSObject
@property (nonatomic) NSOperationQueue asyncTaskQueue;
@property (nonatomic) BOOL hasInited;
- (id)asyncTaskQueue;
- (BOOL)hasInited;
- (void)initWithRpcConfiguration:;
- (void)initializeSecuritySDKTask:;
- (void)setAsyncTaskQueue:;
- (void)setHasInited:;
- (void)setRpcConfiguration:;
- (void)setSecuritySDKConfig:;
- (id)init;
- (void).cxx_destruct;
+ (void)clearStorage;
+ (void)setupEnvironmentMode:;
+ (id)sharedInstance;
@end
