@interface SAFmfPunchOutFriend : SADomainCommand
@property (nonatomic) NSArray friends;
- (id)friends;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setFriends:;
- (id)encodedClassName;
+ (id)punchOutFriend;
+ (id)punchOutFriendWithDictionary:context:;
@end
