@interface BDHybridCertConfig : NSObject
@property (nonatomic) <BDHybridCertContextValidator> contextValidator;
@property (nonatomic) BOOL enableContextValidation;
@property (nonatomic) double contextCleaningTimerInterval;
@property (nonatomic) double contextCleaningTimeThreshold;
- (double)contextCleaningTimeThreshold;
- (double)contextCleaningTimerInterval;
- (id)contextValidator;
- (BOOL)enableContextValidation;
- (void)setContextCleaningTimeThreshold:;
- (void)setContextCleaningTimerInterval:;
- (void)setContextValidator:;
- (void)setEnableContextValidation:;
- (void).cxx_destruct;
+ (id)sharedConfig;
@end
