@interface CEMSecurityTimeLimitsDeclaration_TimeLimits : CEMPayloadBase
@property (nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance payloadWeekdayAllowance;
@property (nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance payloadWeekdayCurfew;
@property (nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance payloadWeekendAllowance;
@property (nonatomic) CEMSecurityTimeLimitsDeclaration_Allowance payloadWeekendCurfew;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadWeekdayAllowance;
- (void)setPayloadWeekdayAllowance:;
- (id)payloadWeekdayCurfew;
- (void)setPayloadWeekdayCurfew:;
- (id)payloadWeekendAllowance;
- (void)setPayloadWeekendAllowance:;
- (id)payloadWeekendCurfew;
- (void)setPayloadWeekendCurfew:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithWeekdayAllowance:withWeekdayCurfew:withWeekendAllowance:withWeekendCurfew:;
@end
