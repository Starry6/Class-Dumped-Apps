@interface PushMessageBaseObject : NSObject
@property (nonatomic) Q sequenceId;
@property (nonatomic) Q logId;
@property (nonatomic) NSInteger method;
@property (nonatomic) NSInteger service;
@property (nonatomic) NSData payload;
@property (nonatomic) NSString payloadType;
@property (nonatomic) NSString payloadEncoding;
@property (nonatomic) NSDictionary headers;
- (id)payloadEncoding;
- (unsigned long long)logId;
- (unsigned long long)sequenceId;
- (void)setLogId:;
- (void)setPayloadEncoding:;
- (void)setSequenceId:;
- (void)setService:;
- (id)payload;
- (void)setPayload:;
- (int)method;
- (void)setHeaders:;
- (int)service;
- (void).cxx_destruct;
- (void)setMethod:;
- (id)headers;
- (id)payloadType;
- (void)setPayloadType:;
@end
