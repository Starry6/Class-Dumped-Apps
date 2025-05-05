@interface AAGenericTermsUIResponse : AAResponse
@property (nonatomic) NSData responseData;
@property (nonatomic) NSString agreeURL;
@property (nonatomic) NSDictionary termsDictionary;
- (id)responseData;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)termsDictionary;
- (id)agreeURL;
@end
