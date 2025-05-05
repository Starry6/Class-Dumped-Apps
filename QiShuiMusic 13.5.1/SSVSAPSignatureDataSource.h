@interface SSVSAPSignatureDataSource : NSObject
@property (nonatomic) NSData HTTPBody;
@property (nonatomic) NSString HTTPMethod;
- (id)HTTPBody;
- (void).cxx_destruct;
- (id)initWithURLRequest:;
- (id)initWithURLRequestProperties:;
- (id)HTTPMethod;
- (id)initWithURLResponse:bodyData:;
- (id)valueForHTTPHeader:;
- (id)valueForQueryParameter:;
@end
