@interface AWEIMSubscribeCardModel : IESIMBaseApiModel
@property (nonatomic) q cardId;
@property (nonatomic) q userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) IESIMURLModel avatar;
@property (nonatomic) q receiveTime;
@property (nonatomic) NSArray articleList;
- (void)setArticleList:;
- (void)setReceiveTime:;
- (id)articleList;
- (long long)receiveTime;
- (id)secUid;
- (void)setSecUid:;
- (long long)userId;
- (id)nickName;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickName:;
- (long long)cardId;
- (id)avatar;
- (void)setAvatar:;
- (void)setCardId:;
+ (id)articleListJSONTransformer;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
