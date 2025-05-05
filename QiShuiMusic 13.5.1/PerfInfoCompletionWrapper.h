@interface PerfInfoCompletionWrapper : NSObject
@property (nonatomic) @? perfInfoCompletion;
@property (nonatomic) Q levelType;
- (id)initWithCompeletion:levelType:;
- (unsigned long long)levelType;
- (id)perfInfoCompletion;
- (void)setLevelType:;
- (void)setPerfInfoCompletion:;
- (void).cxx_destruct;
@end
