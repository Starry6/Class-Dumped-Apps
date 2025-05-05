@interface AASecondaryAuthenticationResponse : AAResponse
@property (nonatomic) NSString secondFactorToken;
@property (nonatomic) NSData buddyML;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)secondFactorToken;
- (id)buddyML;
@end
