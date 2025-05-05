@interface IESLiveMyLiveFixedOperationButton : UIView
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) q type;
- (void)myRightsTapped:;
- (void)openLiveTapped:;
- (id)initWithType:store:;
- (void)setupMyRightsBtn;
- (void)setupOpenLiveBtn;
- (void)setStore:;
- (void)setType:;
- (long long)type;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
@end
