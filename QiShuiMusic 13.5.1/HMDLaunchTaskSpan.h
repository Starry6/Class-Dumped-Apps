@interface HMDLaunchTaskSpan : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString module;
@property (nonatomic) q start;
@property (nonatomic) q end;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) BOOL isSubThread;
- (void)setIsSubThread:;
- (BOOL)isFinish;
- (BOOL)isSubThread;
- (void)setIsFinish:;
- (void)setEnd:;
- (void)setStart:;
- (long long)end;
- (id)module;
- (void)setName:;
- (long long)start;
- (void).cxx_destruct;
- (id)name;
- (void)setModule:;
+ (id)defaultSpansWithTimingStruct:endTaskName:;
+ (id)defaultWithName:start:end:;
@end
