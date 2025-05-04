@interface AWEIMActiveUserAcquirerValue : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString uid;
@property (nonatomic) NSMutableDictionary completionDictionary;
@property (nonatomic) AWEIMActiveUserInfo activeUserInfo;
@property (nonatomic) AWEIMActiveUserInfo nonFriendActiveUserInfo;
- (id)completionDictionary;
- (void)setCompletionDictionary:;
- (id)activeUserInfo;
- (void)setActiveUserInfo:;
- (id)nonFriendActiveUserInfo;
- (void)setNonFriendActiveUserInfo:;
- (void)setUid:;
- (id)init;
- (void)setKey:;
- (id)uid;
- (id)key;
- (void).cxx_destruct;
@end
