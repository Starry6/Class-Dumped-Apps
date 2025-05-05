@interface CSJWebViewLoadManager : NSObject
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) BOOL haveUpdate;
- (BOOL)haveUpdate;
- (void)setHaveUpdate:;
- (void)updateMaxConcurrentOperationCount;
- (id)init;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)setOperationQueue:;
+ (id)sharedInstance;
@end
