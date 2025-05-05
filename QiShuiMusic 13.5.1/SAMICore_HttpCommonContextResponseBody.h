@interface SAMICore_HttpCommonContextResponseBody : NSObject
@property (nonatomic) NSInteger statusCode;
@property (nonatomic) NSString statusText;
@property (nonatomic) NSString taskId;
@property (nonatomic) NSString apiNamespace;
@property (nonatomic) NSData data;
@property (nonatomic) q payloadType;
@property (nonatomic) @ payload;
- (id)apiNamespace;
- (void)setApiNamespace:;
- (void)setStatusCode:;
- (id)payload;
- (int)statusCode;
- (void)dealloc;
- (id)statusText;
- (void)setPayload:;
- (id)data;
- (id)taskId;
- (void)setData:;
- (long long)payloadType;
- (void)setPayloadType:;
- (void)setTaskId:;
- (void)setStatusText:;
@end
