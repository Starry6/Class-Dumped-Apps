@interface AWEFriendStateDataProvider : AWESocialRelationDataProvider
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishTapTAIsFriendWithUser:isFriend:;
- (id)readFromMemory:;
- (BOOL)isFriend:scene:;
- (void)p_didChangeFriendStatus:isFriend:;
- (id)init;
- (void)dealloc;
- (id)identifier;
- (void)write:completion:;
@end
