@interface AWEMateListDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)didFinishRemoveFansWithUser:;
- (void)didReceiveFollowUserResponse:context:error:;
- (void)didReceiveUnfollowUserResponse:context:error:;
- (void)readFromFile:completion:;
- (void)readFromNetwork:completion:;
- (void)updateMateUserWithProfileUser:;
- (void)p_responseWithMateUids:request:completion:;
- (void)p_updateLocalMateListWithMateUidList:request:completion:;
- (id)init;
- (void)dealloc;
- (id)identifier;
@end
