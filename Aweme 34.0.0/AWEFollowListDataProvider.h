@interface AWEFollowListDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)didFinishRemoveFansWithUser:;
- (void)readFromFile:completion:;
- (void)readFromNetwork:completion:;
- (void)updateFollowUserWithProfileUser:;
- (id)localUidStorageKeyWithType:;
- (void)new_buildResponseWithFollowUids:request:networkResponse:compensateUserList:completion:;
- (void)buildResponseWithFollowUids:request:networkResponse:compensateUserList:completion:;
- (id)init;
- (void)dealloc;
- (id)identifier;
@end
