@interface TTAAuthChangeBindRequestModel : NSObject
@property (nonatomic) q platformType;
@property (nonatomic) NSString platform;
@property (nonatomic) NSString platformAppId;
@property (nonatomic) NSString authToken;
@property (nonatomic) NSString profileKey;
@property (nonatomic) NSString verifyType;
@property (nonatomic) NSString verifiedTicket;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)extraParams;
- (id)platformAppId;
- (id)profileKey;
- (void)setPlatformAppId:;
- (void)setProfileKey:;
- (void)setVerifiedTicket:;
- (id)verifiedTicket;
- (id)authToken;
- (void)setAuthToken:;
- (id)init;
- (void)setPlatform:;
- (id)platform;
- (void).cxx_destruct;
- (long long)platformType;
- (void)setPlatformType:;
- (id)verifyType;
- (void)setVerifyType:;
@end
