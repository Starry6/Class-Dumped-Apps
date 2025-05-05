@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject
@property (nonatomic) NSDate desiredKeyRollDate;
@property (nonatomic) I nextWildIndex;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithDesiredNextKeyRollDate:nextWildIndex:;
- (id)encodeConfiguration;
- (id)desiredKeyRollDate;
- (unsigned int)nextWildIndex;
+ (BOOL)supportsSecureCoding;
@end
