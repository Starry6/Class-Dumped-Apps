@interface CEMEventBase : CEMPayloadBase
@property (nonatomic) NSString payloadType;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadType;
- (void)setPayloadType:;
+ (id)eventForPayload:error:;
@end
