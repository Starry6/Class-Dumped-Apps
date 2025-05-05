@interface CEMApplicationControlDeclaration_UpdateSchedule : CEMPayloadBase
@property (nonatomic) NSString payloadMode;
@property (nonatomic) NSNumber payloadDuration;
@property (nonatomic) NSString payloadStartTime;
@property (nonatomic) NSString payloadEndTime;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPayloadMode:;
- (id)payloadMode;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDuration;
- (void)setPayloadDuration:;
- (id)payloadStartTime;
- (void)setPayloadStartTime:;
- (id)payloadEndTime;
- (void)setPayloadEndTime:;
+ (id)allowedPayloadKeys;
+ (id)buildWithMode:withDuration:withStartTime:withEndTime:;
+ (id)buildRequiredOnlyWithMode:;
@end
