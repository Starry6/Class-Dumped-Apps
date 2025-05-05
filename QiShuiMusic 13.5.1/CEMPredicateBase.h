@interface CEMPredicateBase : CEMPayloadBase
@property (nonatomic) NSString payloadType;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadType;
- (void)setPayloadType:;
- (BOOL)evaluateWithOptions:error:;
+ (id)predicateForPayload:error:;
@end
