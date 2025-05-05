@interface CLFindMyAccessoryWildConfiguration : NSObject
@property (nonatomic) NSDate desiredKeyRollDate;
@property (nonatomic) I keyRollInterval;
@property (nonatomic) S keysRemaining;
@property (nonatomic) S keyCount;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)encodeConfiguration;
- (id)desiredKeyRollDate;
- (id)initWithDesiredNextKeyRollDate:keyRollInterval:keysRemainingInWildPeriod:wildPeriodKeyCount:;
- (unsigned int)keyRollInterval;
- (unsigned short)keysRemaining;
- (unsigned short)keyCount;
+ (BOOL)supportsSecureCoding;
@end
