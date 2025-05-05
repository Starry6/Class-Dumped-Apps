@interface BKSTerminationContext : NSObject
@property (nonatomic) q exceptionCode;
@property (nonatomic) NSString explanation;
- (id)explanation;
- (void).cxx_destruct;
- (long long)exceptionCode;
- (void)setExplanation:;
- (void)setExceptionCode:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)_isEqualToTerminationContext:;
+ (id)context;
+ (id)terminationAssertionContext;
@end
