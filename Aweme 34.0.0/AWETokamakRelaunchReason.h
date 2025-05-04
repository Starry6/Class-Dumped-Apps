@interface AWETokamakRelaunchReason : NSObject
@property (nonatomic) I memoryPressureValue;
@property (nonatomic) I reason;
@property (nonatomic) BOOL isOOMDetected;
- (unsigned int)memoryPressureValue;
- (void)setMemoryPressureValue:;
- (BOOL)isOOMDetected;
- (void)setIsOOMDetected:;
- (id)copy;
- (void)setReason:;
- (unsigned int)reason;
@end
