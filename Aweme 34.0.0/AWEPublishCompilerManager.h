@interface AWEPublishCompilerManager : NSObject
@property (nonatomic) NSMutableArray queue;
- (void)remove:videoData:;
- (id)init;
- (void)setQueue:;
- (BOOL)lock:;
- (void).cxx_destruct;
- (id)queue;
- (void)unlock;
+ (id)manager;
@end
