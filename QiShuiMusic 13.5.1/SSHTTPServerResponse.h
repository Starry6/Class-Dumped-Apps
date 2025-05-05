@interface SSHTTPServerResponse : NSObject
@property (nonatomic) NSData body;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) s statusCode;
- (void)setStatusCode:;
- (short)statusCode;
- (id)body;
- (void)setHeaders:;
- (void)setBody:;
- (void).cxx_destruct;
- (id)headers;
- (id)initWithStatusCode:;
- (void)setBodyWithBag:;
- (id)bagFromBody;
- (id)copyHTTPMessage;
@end
