@interface MAProgressNotification : NSObject
@property (nonatomic) q totalExpected;
@property (nonatomic) q totalWritten;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemaining;
- (BOOL)isStalled;
- (double)expectedTimeRemaining;
- (long long)totalWritten;
- (long long)totalExpected;
- (void)setIsStalled:;
- (void)setTotalExpected:;
- (void)setTotalWritten:;
- (void)setExpectedTimeRemaining:;
@end
