@interface IESGurdNetworkResponse : NSObject
@property (nonatomic) NSString requestURLString;
@property (nonatomic) NSDictionary requestParams;
@property (nonatomic) q statusCode;
@property (nonatomic) @ responseObject;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary allHeaderFields;
- (id)requestURLString;
- (void)setAllHeaderFields:;
- (void)setRequestURLString:;
- (void)setResponseObject:;
- (void)setStatusCode:;
- (long long)statusCode;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)allHeaderFields;
- (id)requestParams;
- (void)setRequestParams:;
- (id)responseObject;
@end
