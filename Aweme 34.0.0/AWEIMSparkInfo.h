@interface AWEIMSparkInfo : NSObject
@property (nonatomic) q status;
@property (nonatomic) q sparkType;
@property (nonatomic) q sparkRelationType;
@property (nonatomic) q continueDays;
- (void)setContinueDays:;
- (void)setSparkType:;
- (void)setSparkRelationType:;
- (long long)continueDays;
- (long long)sparkType;
- (long long)sparkRelationType;
- (void)setStatus:;
- (long long)status;
@end
