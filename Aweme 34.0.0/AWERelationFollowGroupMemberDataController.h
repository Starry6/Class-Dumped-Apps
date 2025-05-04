@interface AWERelationFollowGroupMemberDataController : AWEBaseDataController
@property (nonatomic) q cursor;
@property (nonatomic) NSNumber groupID;
- (void)fetchDataWithType:completion:;
- (id)paramsWithFetchType:;
- (void)fetchAllUidsCompletion:;
- (long long)cursor;
- (void)setGroupID:;
- (id)groupID;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)initWithGroupID:;
@end
