@interface AWEFollowListReadResponse : AWESocialRelationResponse
@property (nonatomic) NSArray userList;
@property (nonatomic) AWECodeGenV1FamiliarResponse networkResponse;
@property (nonatomic) Q targetUidListCount;
- (id)userList;
- (void)setUserList:;
- (id)networkResponse;
- (unsigned long long)targetUidListCount;
- (void)setNetworkResponse:;
- (void)setTargetUidListCount:;
- (void).cxx_destruct;
@end
