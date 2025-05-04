@interface AWEFeedSplitScreenFunction : NSObject
@property (nonatomic) q lastAutoPlayState;
@property (nonatomic) BOOL hasGetOriginAutoState;
@property (nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> currentInteraction;
- (void)enablePureMode:;
- (BOOL)hasGetOriginAutoState;
- (long long)lastAutoPlayState;
- (void)setHasGetOriginAutoState:;
- (void)setLastAutoPlayState:;
- (void)enableAutoPlayIfNeeded:;
- (id)init;
- (void).cxx_destruct;
- (void)enableUserInteraction:;
- (id)currentInteraction;
- (void)setCurrentInteraction:;
@end
