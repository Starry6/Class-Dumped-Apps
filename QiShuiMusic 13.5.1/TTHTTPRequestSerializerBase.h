@interface TTHTTPRequestSerializerBase : NSObject
@property (nonatomic) NSObject<TTHTTPRequestSerializerProtocol> currentImpl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentImpl:;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)currentImpl;
- (id)userAgentString;
- (id)init;
- (void).cxx_destruct;
+ (id)hashRequest:body:;
+ (id)serializer;
@end
