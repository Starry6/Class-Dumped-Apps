@interface AALoginResponseiCloudTokens : NSObject
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString fmipAuthToken;
@property (nonatomic) NSString fmipAppToken;
@property (nonatomic) NSString fmipLostModeToken;
@property (nonatomic) NSString fmipSiriToken;
@property (nonatomic) NSString fmfToken;
@property (nonatomic) NSString fmfAppToken;
@property (nonatomic) NSString cloudKitToken;
@property (nonatomic) NSString mdmServerToken;
@property (nonatomic) NSString mapsToken;
@property (nonatomic) NSString searchPartyToken;
@property (nonatomic) NSString keyTransparencyToken;
- (id)authToken;
- (id)mdmServerToken;
- (id)fmipAppToken;
- (id)fmipAuthToken;
- (id)keyTransparencyToken;
- (id)mapsToken;
- (void).cxx_destruct;
- (id)searchPartyToken;
- (id)fmipSiriToken;
- (id)initWithTokens:;
- (id)fmipLostModeToken;
- (id)fmfToken;
- (id)fmfAppToken;
- (id)cloudKitToken;
@end
