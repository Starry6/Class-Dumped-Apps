@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject
@property (nonatomic) Q accountUniqueIdentifier;
@property (nonatomic) BOOL hasOnlinePlaybackKeys;
@property (nonatomic) BOOL hasOfflinePlaybackKeys;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasOnlinePlaybackKeys;
- (void)setHasOnlinePlaybackKeys:;
- (BOOL)hasOfflinePlaybackKeys;
- (void)setHasOfflinePlaybackKeys:;
- (id)initWithFairPlaySubscriptionInfo:;
- (unsigned long long)accountUniqueIdentifier;
- (void)setAccountUniqueIdentifier:;
@end
