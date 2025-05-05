@interface TTADeviceLoginRequestModel : NSObject
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString userId;
@property (nonatomic) BOOL hasEncrypted;
@property (nonatomic) NSString dTicket;
@property (nonatomic) q loginType;
@property (nonatomic) q loginTime;
@property (nonatomic) NSString loginPlatform;
@property (nonatomic) NSDictionary extraInfo;
- (id)dTicket;
- (id)loginPlatform;
- (long long)loginTime;
- (id)secUserId;
- (void)setDTicket:;
- (void)setExtraInfo:;
- (void)setLoginPlatform:;
- (void)setLoginTime:;
- (void)setSecUserId:;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (BOOL)hasEncrypted;
- (id)extraInfo;
- (void)setLoginType:;
- (long long)loginType;
- (void)setHasEncrypted:;
@end
