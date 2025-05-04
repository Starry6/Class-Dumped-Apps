@interface AWEPublishExclusionListDataController : AWEListDataController
@property (nonatomic) NSString awemeID;
@property (nonatomic) BOOL isDigest;
@property (nonatomic) q totalCount;
@property (nonatomic) NSArray secUserList;
- (void)setAwemeID:;
- (id)awemeID;
- (BOOL)isDigest;
- (id)secUserList;
- (void)setSecUserList:;
- (id)initWithAwemeID:isDigest:;
- (void)setIsDigest:;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setTotalCount:;
@end
