@interface AWEECOMIMPaasUserInfoModelNew : NSObject
@property (nonatomic) BDECPigeonUserInfoPatchModel userInfoModel;
@property (nonatomic) NSString pigeonUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userInfoModel;
- (void)setUserInfoModel:;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setPigeonUid:;
- (id)pigeonUid;
- (void)setNickName:;
- (void).cxx_destruct;
- (id)nickName;
+ (id)PaasUserInfoModelWithPigeonUserInfoModel:;
@end
