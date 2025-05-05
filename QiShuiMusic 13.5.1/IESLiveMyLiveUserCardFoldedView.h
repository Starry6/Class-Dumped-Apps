@interface IESLiveMyLiveUserCardFoldedView : IESLiveUserCard
@property (nonatomic) IESLiveCircleRollLabel nickNameLabel;
- (id)colorOfBackground;
- (id)createNickNameLabel;
- (void)didSetAttachingDIContext;
- (id)initWithStore:landscapeMode:;
- (id)nickNameLabel;
- (void)setNickNameLabel:;
- (void)setupBackgroundContainer;
- (void)setupUIContainer;
- (void)setupUsercardHierarchy;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)createAvatarView;
@end
