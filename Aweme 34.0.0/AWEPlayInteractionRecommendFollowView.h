@interface AWEPlayInteractionRecommendFollowView : UIStackView
@property (nonatomic) AWEUIListCellActionButtonColorModel colorModel;
@property (nonatomic) AWEButton uninterestBtn;
@property (nonatomic) DUXButton followBtn;
- (id)colorModel;
- (void)setColorModel:;
- (void)buildUI;
- (id)followBtn;
- (void)updateWithFollowStatus:followerStatus:;
- (void)setFollowBtn:;
- (id)uninterestBtn;
- (void)updateFollowButtonActiveStatus:;
- (void)setUninterestBtn:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
