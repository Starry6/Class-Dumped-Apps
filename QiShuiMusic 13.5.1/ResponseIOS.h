@interface ResponseIOS : NSObject
@property (nonatomic) q statusCode;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString MIMEType;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) BOOL ok;
- (void)Reject:error:delPtr:;
- (void)Resolve:body:delPtr:;
- (id)init:url:mimeType:headers:;
- (id)jsObjectFromResponse:body:worker:;
- (void)setOk:;
- (id)url;
- (long long)statusCode;
- (BOOL)ok;
- (void).cxx_destruct;
- (id)headers;
- (id)MIMEType;
@end
