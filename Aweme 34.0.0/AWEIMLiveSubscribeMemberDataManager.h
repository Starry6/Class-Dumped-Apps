@interface AWEIMLiveSubscribeMemberDataManager : NSObject
@property (nonatomic) Q ownerID;
@property (nonatomic) Q groupCreateType;
@property (nonatomic) Q pageCursor;
@property (nonatomic) BOOL hasMoreSubscribe;
- (unsigned long long)groupCreateType;
- (void)setGroupCreateType:;
- (unsigned long long)pageCursor;
- (void)setPageCursor:;
- (void)__fetchLiveSubscribeMemberWithCompletion:;
- (id)fetchUrl;
- (void)setHasMoreSubscribe:;
- (void)fetchFirstPageSubscribeUsersWithCompletion:;
- (void)loadMoreSubscribeUsersWithCompletion:;
- (BOOL)hasMoreSubscribe;
- (unsigned long long)ownerID;
- (void)setOwnerID:;
@end
