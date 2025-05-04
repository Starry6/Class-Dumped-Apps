@interface AWEIMMessageRoleCardProps : AWEIMUIViewPresenterProps
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL followFloatViewDisplaying;
@property (nonatomic) @? tapAvatarActionBlock;
@property (nonatomic) @? followActionBlock;
@property (nonatomic) @? tapIdentityIconActionBlock;
@property (nonatomic) @? tapExpandContentActionBlock;
- (void)setTapAvatarActionBlock:;
- (void)setFollowActionBlock:;
- (void)setTapIdentityIconActionBlock:;
- (void)setTapExpandContentActionBlock:;
- (BOOL)followFloatViewDisplaying;
- (void)setFollowFloatViewDisplaying:;
- (id)tapAvatarActionBlock;
- (id)followActionBlock;
- (id)tapIdentityIconActionBlock;
- (id)tapExpandContentActionBlock;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
@end
