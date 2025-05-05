@interface BU_IESGurdNetworkResponse : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) @ responseObject;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary allHeaderFields;
- (void)setAllHeaderFields:;
- (void)setResponseObject:;
- (void)setStatusCode:;
- (long long)statusCode;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)allHeaderFields;
- (id)responseObject;
@end
