@interface BLSPreventBacklightIdleAttribute : BLSAttribute
@property (nonatomic) BOOL restartTimerOnInvalidation;
@property (nonatomic) BOOL clearUserInteraction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithRestartTimerOnInvalidation:clearUserInteraction:;
- (BOOL)restartTimerOnInvalidation;
- (BOOL)clearUserInteraction;
+ (BOOL)supportsSecureCoding;
+ (id)preventIdle;
+ (id)preventIdleAndRestartTimerOnInvalidation;
+ (id)preventIdleClearUserInteractionAndRestartTimerOnInvalidation;
@end
