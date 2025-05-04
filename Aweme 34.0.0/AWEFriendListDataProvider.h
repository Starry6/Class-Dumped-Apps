@interface AWEFriendListDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)readFromFile:completion:;
- (void)readFromNetwork:completion:;
- (id)p_syncReadFromFile:;
- (id)p_getFriendCount;
- (void)p_getServerUidListWithCompletion:;
- (void)updateLocalFriendList:;
- (id)identifier;
@end
