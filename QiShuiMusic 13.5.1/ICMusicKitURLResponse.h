@interface ICMusicKitURLResponse : ICURLResponse
@property (nonatomic) NSString serverCorrelationKey;
@property (nonatomic) NSString serverEnvironment;
@property (nonatomic) NSError serverError;
- (void)_initializeMusicKitURLResponse;
- (id)serverError;
- (id)serverEnvironment;
- (id)initWithURLResponse:urlRequest:bodyDataURL:performanceMetrics:;
- (id)initWithURLResponse:urlRequest:bodyData:performanceMetrics:;
- (id)_parseServerErrorDictionary:;
- (id)serverCorrelationKey;
- (void).cxx_destruct;
- (id)_parseServerError;
- (id)description;
@end
