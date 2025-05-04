@interface AWEMateListReadResponse : AWESocialRelationResponse
@property (nonatomic) NSArray userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) q total;
@property (nonatomic) AWECodeGenV1MateListResponse networkResponse;
- (id)userList;
- (void)setUserList:;
- (id)networkResponse;
- (void)setNetworkResponse:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
@end
