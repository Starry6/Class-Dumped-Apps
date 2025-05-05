@interface LynxHttpResponse : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) q clientCode;
@property (nonatomic) NSDictionary allHeaderFields;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString MIMEType;
@property (nonatomic) @ body;
@property (nonatomic) NSError error;
- (long long)clientCode;
- (void)setAllHeaderFields:;
- (void)setClientCode:;
- (void)setStatusCode:;
- (long long)statusCode;
- (id)body;
- (void)setError:;
- (id)error;
- (void)setBody:;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (id)MIMEType;
- (id)allHeaderFields;
- (void)setMIMEType:;
@end
