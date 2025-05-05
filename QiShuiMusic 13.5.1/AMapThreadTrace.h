@interface AMapThreadTrace : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q pthread_id;
@property (nonatomic) NSArray callStack;
@property (nonatomic) BOOL isMainThread;
@property (nonatomic) BOOL isCrashThread;
- (BOOL)isCrashThread;
- (long long)pthread_id;
- (void)setCallStack:;
- (void)setIsCrashThread:;
- (void)setIsMainThread:;
- (void)setPthread_id:;
- (id)init;
- (void)setName:;
- (BOOL)isMainThread;
- (id)copy;
- (id)callStack;
- (void).cxx_destruct;
- (id)name;
@end
