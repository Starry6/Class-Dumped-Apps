@interface AWEIMCodeGenFriendsAlbumSourceInfoModel : AWEBaseDataModel
@property (nonatomic) q serverMessageId;
@property (nonatomic) q messageCreateTime;
@property (nonatomic) q messageSenderUid;
- (long long)messageSenderUid;
- (long long)messageCreateTime;
- (void)setMessageCreateTime:;
- (void)setMessageSenderUid:;
- (long long)serverMessageId;
- (void)setServerMessageId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
