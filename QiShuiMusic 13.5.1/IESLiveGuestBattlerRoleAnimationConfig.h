@interface IESLiveGuestBattlerRoleAnimationConfig : NSObject
@property (nonatomic) q battlerRole;
@property (nonatomic) NSString fromUserID;
@property (nonatomic) NSString toUserID;
@property (nonatomic) BOOL isExchange;
@property (nonatomic) q crownLevel;
@property (nonatomic) BOOL shouldAnimate;
- (void)setBattlerRole:;
- (long long)battlerRole;
- (long long)crownLevel;
- (id)fromUserID;
- (void)setCrownLevel:;
- (void)setFromUserID:;
- (void)setIsExchange:;
- (void)setToUserID:;
- (id)toUserID;
- (BOOL)shouldAnimate;
- (id)init;
- (BOOL)isExchange;
- (void).cxx_destruct;
- (void)setShouldAnimate:;
@end
