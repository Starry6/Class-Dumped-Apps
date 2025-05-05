@interface WBSCyclerStatus : NSObject
@property (nonatomic) NSString activeTestSuiteName;
@property (nonatomic) Q seed;
@property (nonatomic) BOOL connectedToTestTarget;
@property (nonatomic) BOOL running;
@property (nonatomic) Q iterationCount;
@property (nonatomic) double executionTime;
- (unsigned long long)seed;
- (id)init;
- (id)initWithCoder:;
- (BOOL)isRunning;
- (void)encodeWithCoder:;
- (double)executionTime;
- (void).cxx_destruct;
- (id)initWithActiveTestSuiteName:seed:isConnectedToTestTarget:isRunning:iterationCount:executionTime:;
- (id)activeTestSuiteName;
- (BOOL)isConnectedToTestTarget;
- (unsigned long long)iterationCount;
+ (BOOL)supportsSecureCoding;
@end
