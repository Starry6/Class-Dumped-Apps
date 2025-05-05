@interface AAResponse : NSObject
@property (nonatomic) NSHTTPURLResponse httpResponse;
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) NSError error;
@property (nonatomic) NSString protocolVersion;
@property (nonatomic) q statusCode;
@property (nonatomic) NSData data;
@property (nonatomic) NSNumber maxAge;
- (id)protocolVersion;
- (long long)statusCode;
- (id)responseDictionary;
- (id)data;
- (void)setError:;
- (id)error;
- (id)maxAge;
- (id)httpResponse;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:data:bodyIsPlist:;
- (void)_parsePlistResponse:;
- (void)_parseJSONResponse:;
- (id)_stringWithDescriptionForResponseError:;
- (id)_deviceSpecificLocalizedString:;
@end
