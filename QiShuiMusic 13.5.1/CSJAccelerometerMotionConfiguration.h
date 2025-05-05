@interface CSJAccelerometerMotionConfiguration : NSObject
@property (nonatomic) double amplitude;
@property (nonatomic) q calculateMethod;
@property (nonatomic) NSString scence;
@property (nonatomic) NSString identifierKey;
@property (nonatomic) CSJShakeInteractConfigModel interactConfig;
- (long long)calculateMethod;
- (id)interactConfig;
- (id)scence;
- (void)setCalculateMethod:;
- (void)setInteractConfig:;
- (void)setScence:;
- (id)identifierKey;
- (id)initWithDataSource:;
- (void)setAmplitude:;
- (void).cxx_destruct;
- (double)amplitude;
- (void)setIdentifierKey:;
+ (id)configurationWithDataSource:;
@end
