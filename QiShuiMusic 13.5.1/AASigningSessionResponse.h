@interface AASigningSessionResponse : AAResponse
@property (nonatomic) NSData sessionData;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)sessionData;
- (void)setSessionData:;
@end
