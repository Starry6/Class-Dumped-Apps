@interface AWECloseFriendsStateReadResponse : AWESocialRelationResponse
@property (nonatomic) q closeFriendsType;
@property (nonatomic) BOOL isCloseFriends;
- (BOOL)isCloseFriends;
- (long long)closeFriendsType;
- (void)setCloseFriendsType:;
- (void)setIsCloseFriends:;
@end
