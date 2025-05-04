@interface AWEMusicStreamingImpl.LunaMyUserState : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q followStatus;
@property (nonatomic) BOOL blockedByMe;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL followedByMe;
- (long long)followStatus;
- (void)setFollowStatus:;
- (BOOL)blockedByMe;
- (void)setBlockedByMe:;
- (BOOL)followedByMe;
- (BOOL)isBlocked;
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
- (void)setIsBlocked:;
+ (id)JSONKeyPathsByPropertyKey;
@end
