@interface AWEVoteStickerDetailResponseModel : AWEBaseApiModel
@property (nonatomic) NSMutableArray userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
- (id)userList;
- (void)setUserList:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
