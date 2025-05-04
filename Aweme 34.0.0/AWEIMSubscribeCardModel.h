@interface AWEIMSubscribeCardModel : AWEBaseApiModel
@property (nonatomic) q cardId;
@property (nonatomic) q userId;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickName;
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) q receiveTime;
@property (nonatomic) NSArray articleList;
- (id)secUid;
- (void)setSecUid:;
- (long long)receiveTime;
- (void)setReceiveTime:;
- (id)articleList;
- (void)setArticleList:;
- (long long)userId;
- (void)setNickName:;
- (void).cxx_destruct;
- (void)setUserId:;
- (id)nickName;
- (long long)cardId;
- (id)avatar;
- (void)setAvatar:;
- (void)setCardId:;
+ (id)avatarJSONTransformer;
+ (id)articleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
