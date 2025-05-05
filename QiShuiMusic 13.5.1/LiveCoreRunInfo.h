@interface LiveCoreRunInfo : NSObject
@property (nonatomic) BOOL firstStart;
@property (nonatomic) double firstStartTime;
@property (nonatomic) BOOL pushedOnce;
@property (nonatomic) NSString project_key;
- (void)setProject_key:;
- (BOOL)firstStart;
- (double)firstStartTime;
- (id)project_key;
- (BOOL)pushedOnce;
- (void)setFirstStart:;
- (void)setFirstStartTime:;
- (void)setPushedOnce:;
- (id)init;
- (void).cxx_destruct;
@end
