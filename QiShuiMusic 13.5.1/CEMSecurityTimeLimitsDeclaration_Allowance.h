@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase
@property (nonatomic) NSNumber payloadEnabled;
@property (nonatomic) NSNumber payloadRangeType;
@property (nonatomic) NSString payloadStart;
@property (nonatomic) NSString payloadEnd;
@property (nonatomic) NSNumber payloadSecondsPerDay;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadEnabled;
- (void)setPayloadEnabled:;
- (id)payloadRangeType;
- (void)setPayloadRangeType:;
- (id)payloadStart;
- (void)setPayloadStart:;
- (id)payloadEnd;
- (void)setPayloadEnd:;
- (id)payloadSecondsPerDay;
- (void)setPayloadSecondsPerDay:;
+ (id)allowedPayloadKeys;
+ (id)buildWithEnabled:withRangeType:withStart:withEnd:withSecondsPerDay:;
+ (id)buildRequiredOnlyWithEnabled:withRangeType:;
@end
