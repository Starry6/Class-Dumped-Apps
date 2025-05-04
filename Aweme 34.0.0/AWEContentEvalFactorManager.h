@interface AWEContentEvalFactorManager : NSObject
@property (nonatomic) NSMutableDictionary factorParsers;
@property (nonatomic) NSDictionary factors;
- (void)setFactorParsers:;
- (void)registerFactorParsers;
- (id)factorParsers;
- (void)registerParserWithName:block:;
- (id)calculateValueOfFactor:context:;
- (void)setFactors:;
- (id)factors;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
