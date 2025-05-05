@interface PuzzleNetworkResponseModel : NSObject
@property (nonatomic) @ jsonObj;
@property (nonatomic) @ binaryData;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary responseHeaders;
@property (nonatomic) q httpCode;
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) @ data;
- (id)jsonObj;
- (void)setBinaryData:;
- (void)setJsonObj:;
- (id)extra;
- (id)statusCode;
- (id)data;
- (id)responseHeaders;
- (void)setError:;
- (id)error;
- (void)setHttpCode:;
- (long long)httpCode;
- (void).cxx_destruct;
- (void)setResponseHeaders:;
- (id)binaryData;
@end
