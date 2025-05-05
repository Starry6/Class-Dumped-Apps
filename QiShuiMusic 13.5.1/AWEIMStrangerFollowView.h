@interface AWEIMStrangerFollowView : UIView
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) q preferPosition;
@property (nonatomic) AWEButton followBtn;
@property (nonatomic) AWEButton closeBtn;
- (id)closeBtn;
- (void)didFetchFullDetailUser:;
- (id)followBtn;
- (id)initWithFrame:position:;
- (void)p_addSubviewForBottom;
- (void)p_addSubviewForTop;
- (id)p_defaultOnlineTips:;
- (id)p_recommendReasonTips:;
- (void)p_refreshFollowBtnUIWithFollowStatusForBottom:followerStatus:;
- (void)p_refreshFollowBtnUIWithFollowStatusForTop:followerStatus:;
- (long long)preferPosition;
- (void)refreshFollowBtnUIWithFollowStatus:followerStatus:;
- (void)setCloseBtn:;
- (void)setFollowBtn:;
- (void)setPreferPosition:;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
@end
