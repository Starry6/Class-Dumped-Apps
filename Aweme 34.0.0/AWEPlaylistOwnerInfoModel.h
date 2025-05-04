@interface AWEPlaylistOwnerInfoModel : AWEBaseApiModel
@property (nonatomic) NSString uid;
@property (nonatomic) NSString sec_uid;
@property (nonatomic) NSString nickname;
- (id)sec_uid;
- (void)setSec_uid:;
- (id)initWithMiniLunaModel:;
- (id)nickname;
- (void)setUid:;
- (id)uid;
- (void).cxx_destruct;
- (void)setNickname:;
+ (id)avatarLargerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
