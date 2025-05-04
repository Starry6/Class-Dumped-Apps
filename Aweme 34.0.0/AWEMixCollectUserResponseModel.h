@interface AWEMixCollectUserResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString noticeID;
@property (nonatomic) NSArray userList;
- (id)userList;
- (void)setNoticeID:;
- (id)noticeID;
- (void)setUserList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
