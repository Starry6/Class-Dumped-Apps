@interface IDSCTPNRValidationMechanism : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString context;
- (id)context;
- (unsigned long long)hash;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithType:context:;
+ (id)SMSMechanismWithContext:;
+ (id)SMSLessMechanism;
@end
