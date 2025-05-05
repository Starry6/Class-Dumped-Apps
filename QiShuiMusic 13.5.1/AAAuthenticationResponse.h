@interface AAAuthenticationResponse : AAResponse
@property (nonatomic) NSString fmfToken;
@property (nonatomic) NSString fmfAppToken;
@property (nonatomic) NSString fmipToken;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString mapsToken;
@property (nonatomic) NSString cloudKitToken;
@property (nonatomic) NSString fmipLostModeToken;
@property (nonatomic) NSString personID;
@property (nonatomic) NSString altDSID;
@property (nonatomic) NSString mdmServerToken;
- (id)authToken;
- (id)mdmServerToken;
- (id)altDSID;
- (id)personID;
- (id)fmipToken;
- (id)initWithHTTPResponse:data:;
- (id)mapsToken;
- (void).cxx_destruct;
- (id)fmipLostModeToken;
- (id)fmfToken;
- (id)fmfAppToken;
- (id)cloudKitToken;
@end
