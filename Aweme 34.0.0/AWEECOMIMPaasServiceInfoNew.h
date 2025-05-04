@interface AWEECOMIMPaasServiceInfoNew : NSObject
@property (nonatomic) BDECPigeonServiceInfoV2 serviceInfo;
@property (nonatomic) NSString pigeonCid;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatar;
@property (nonatomic) NSString shopName;
@property (nonatomic) Q bizOnlineStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pigeonCid;
- (void)setPigeonCid:;
- (unsigned long long)bizOnlineStatus;
- (id)shopName;
- (void)setShopName:;
- (void)setBizOnlineStatus:;
- (id)serviceInfo;
- (void)setNickName:;
- (void).cxx_destruct;
- (void)setServiceInfo:;
- (id)nickName;
- (id)avatar;
- (void)setAvatar:;
+ (id)paasUserInfoModelWithPigeonServiceInfoModel:;
@end
