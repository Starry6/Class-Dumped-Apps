@interface AWEModularizationNoticeFollowButton : AWEUIListCellNoticeActionButton
@property (nonatomic) AWEUserModel user;
@property (nonatomic) AWENotificationModelNew model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishSetRemarkWithUser:;
- (id)initWithNoticeModel:;
- (void)clickModularizationNoticeButton;
- (void)unfollowUser;
- (void)p_trackerInnerMessage;
- (void)recommendPersonFollowActionChanged:;
- (void)updateActionButtonWithUser:;
- (void)configButton;
- (void)p_trackRecommendPersonCardWithAction:;
- (void)p_trackRecommendPersonFollow:;
- (id)user;
- (void)setModel:;
- (void)setUser:;
- (void)dealloc;
- (id)model;
- (void).cxx_destruct;
+ (id)actionBtnFont;
@end
