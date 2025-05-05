@interface ICURLResponse : NSObject
@property (nonatomic) NSURLRequest urlRequest;
@property (nonatomic) NSURLResponse urlResponse;
@property (nonatomic) NSData bodyData;
@property (nonatomic) NSURL bodyDataURL;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) q statusCode;
@property (nonatomic) ICURLPerformanceMetrics performanceMetrics;
- (long long)statusCode;
- (void)setPerformanceMetrics:;
- (id)bodyData;
- (id)initWithURLResponse:urlRequest:bodyDataURL:performanceMetrics:;
- (id)expirationDate;
- (id)performanceMetrics;
- (id)urlRequest;
- (id)initWithURLResponse:urlRequest:bodyData:performanceMetrics:;
- (void).cxx_destruct;
- (id)urlResponse;
- (id)parsedBody;
- (id)parsedBodyDictionary;
- (id)parsedBodyArray;
- (id)parsedBodyText;
- (void)_prepareParsedBodyResponse;
- (id)bodyDataURL;
@end
