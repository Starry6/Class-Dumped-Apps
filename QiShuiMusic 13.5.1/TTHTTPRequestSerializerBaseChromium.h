@interface TTHTTPRequestSerializerBaseChromium : NSObject
@property (nonatomic) NSString defaultUserAgentString;
@property (nonatomic) NSSet HTTPMethodsEncodingParametersInURI;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)HTTPMethodsEncodingParametersInURI;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)_buildRequestHeaders:;
- (id)defaultUserAgentString;
- (void)setDefaultUserAgentString:;
- (void)setHTTPMethodsEncodingParametersInURI:;
- (id)userAgentString;
- (id)init;
- (void).cxx_destruct;
+ (id)serializer;
@end
