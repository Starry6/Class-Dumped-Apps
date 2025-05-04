@interface AWEUserRecommendBigCardFooterView : UIView
@property (nonatomic) AWEUserRecommendButton followBtn;
@property (nonatomic) AWEUserRecommendButton nextBtn;
@property (nonatomic) @? followBtnTappedBlock;
@property (nonatomic) @? nextBtnTappedBlock;
@property (nonatomic) @? unFollowBtnTappedBlock;
- (id)followBtn;
- (void)setFollowBtn:;
- (id)nextBtn;
- (void)setNextBtn:;
- (void)setFollowBtnTappedBlock:;
- (void)setNextBtnTappedBlock:;
- (void)setUnFollowBtnTappedBlock:;
- (void)followBtnTapped:;
- (id)p_buttonColorModel;
- (void)nextBtnTapped:;
- (id)followBtnTappedBlock;
- (id)unFollowBtnTappedBlock;
- (id)nextBtnTappedBlock;
- (void)setAlpha:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
