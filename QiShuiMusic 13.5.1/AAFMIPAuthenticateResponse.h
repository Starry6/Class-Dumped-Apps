@interface AAFMIPAuthenticateResponse : AAResponse
@property (nonatomic) NSString fmipWipeToken;
@property (nonatomic) NSString fmipUrl;
@property (nonatomic) NSString fmipDsid;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)fmipWipeToken;
- (id)fmipUrl;
- (id)fmipDsid;
@end
