@interface BNJsonRequestSerializer : TTDefaultHTTPRequestSerializer
@property (nonatomic) NSSet HTTPMethodsEncodingParametersInURI;
- (id)HTTPMethodsEncodingParametersInURI;
- (id)URLRequestWithRequestModel:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (void)setHTTPMethodsEncodingParametersInURI:;
- (id)init;
- (void).cxx_destruct;
@end
