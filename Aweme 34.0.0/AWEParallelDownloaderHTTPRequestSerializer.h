@interface AWEParallelDownloaderHTTPRequestSerializer : TTHTTPRequestSerializerBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithRequestModel:commonParams:;
+ (id)serializer;
@end
