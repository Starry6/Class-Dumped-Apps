@interface IESLiveUserCardConfig : NSObject
@property (nonatomic) q targetRole;
@property (nonatomic) q myRole;
@property (nonatomic) IESLiveUserCardStore store;
- (id)getCurrentScene;
- (id)audienceViewOtherAnchorConfig;
- (id)getCurrentRequestPage:;
- (id)getUserCardConfig;
- (id)initWithMyRole:toRole:;
- (long long)myRole;
- (void)setMyRole:;
- (void)setTargetRole:;
- (id)userCardConfig;
- (void)setStore:;
- (long long)targetRole;
- (void).cxx_destruct;
- (id)store;
@end
