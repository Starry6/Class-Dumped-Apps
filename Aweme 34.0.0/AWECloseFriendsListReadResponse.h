@interface AWECloseFriendsListReadResponse : AWESocialRelationResponse
@property (nonatomic) NSArray forwardUserIDList;
@property (nonatomic) NSArray reverseUserIDList;
@property (nonatomic) q closeFriendsCount;
- (long long)closeFriendsCount;
- (id)forwardUserIDList;
- (void)setCloseFriendsCount:;
- (void)setForwardUserIDList:;
- (id)reverseUserIDList;
- (void)setReverseUserIDList:;
- (void).cxx_destruct;
@end
