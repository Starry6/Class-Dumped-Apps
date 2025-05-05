@interface ASCHasher : NSObject
@property (nonatomic) NSMutableData buffer;
@property (nonatomic) BOOL isFinalized;
- (id)init;
- (id)buffer;
- (BOOL)isFinalized;
- (void)combineBool:;
- (void).cxx_destruct;
- (void)combineInteger:;
- (void)combineBytes:length:;
- (void)combineDouble:;
- (void)combineUnsignedInteger:;
- (void)combineObject:;
- (unsigned long long)finalizeHash;
- (void)setIsFinalized:;
+ (unsigned long long)executionSeed;
@end
