@interface IMRuntimeTestRun : NSObject
@property (nonatomic) BOOL succeeded;
@property (nonatomic) IMRuntimeTest test;
- (void)start;
- (id)test;
- (void)stop;
- (void).cxx_destruct;
- (void)setSucceeded:;
- (BOOL)hasSucceeded;
- (id)initWithTest:;
- (void)recordFailureWithDescription:inFile:atLine:expected:;
@end
