@interface ADTimeProfiler : NSObject
@property (nonatomic) NSMutableArray logArray;
- (void)stop:;
- (id)init;
- (void)start:;
- (id)log;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (id)logArray;
- (void)startWithUTFString:;
- (void)stopWithUTFString:;
- (void)startForOperationWithName:;
- (void)stopForOperationWithName:;
- (id)valueDictForOperationName:;
- (void)printLog;
- (id)stringLog;
- (void)setLogArray:;
+ (unsigned long long)currentTime;
@end
