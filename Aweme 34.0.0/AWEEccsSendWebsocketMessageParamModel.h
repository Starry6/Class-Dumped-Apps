@interface AWEEccsSendWebsocketMessageParamModel : IESLiveBridgeModel
@property (nonatomic) NSString sequenceId;
@property (nonatomic) NSString logId;
@property (nonatomic) NSNumber method;
@property (nonatomic) NSNumber service;
@property (nonatomic) NSDictionary payload;
@property (nonatomic) NSString payloadType;
@property (nonatomic) NSString payloadEncoding;
@property (nonatomic) NSDictionary headers;
- (id)logId;
- (void)setLogId:;
- (void)setPayloadEncoding:;
- (id)payloadEncoding;
- (id)sequenceId;
- (void)setSequenceId:;
- (void)setPayload:;
- (id)service;
- (void)setService:;
- (id)payload;
- (void)setMethod:;
- (void).cxx_destruct;
- (id)method;
- (void)setHeaders:;
- (id)headers;
- (void)setPayloadType:;
- (id)payloadType;
+ (id)modelCustomPropertyMapper;
@end
