@interface AWEFriendStateWriteRequest : AWESocialRelationRequest
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL isFriend;
- (void)setIsFriend:;
- (id)user;
- (void)setUser:;
- (void).cxx_destruct;
- (BOOL)isFriend;
+ (id)requestForScene:user:isFriend:;
@end
