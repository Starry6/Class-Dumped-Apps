@interface AWEIMPopupRedPacketAdditionalRewardTipsView : UIView
@property (nonatomic) UILabel additionalRewardTipsLabel;
@property (nonatomic) UIView remindReceiveView;
@property (nonatomic) UILabel remindReceiveLabel;
@property (nonatomic) UIImageView entranceArrowImageView;
@property (nonatomic) AWEIMPopupRedPacketAdditionalRewardData additionalRewardData;
@property (nonatomic) <AWEIMPopupRedPacketRefreshResultPageMessage> delegate;
- (id)remindReceiveView;
- (id)remindReceiveLabel;
- (id)entranceArrowImageView;
- (id)additionalRewardTipsLabel;
- (void)setAdditionalRewardData:;
- (id)additionalRewardData;
- (void)jumpToReceiveAdditionalReward;
- (void)configAdditionalRewardData:;
- (void)setAdditionalRewardTipsLabel:;
- (void)setRemindReceiveView:;
- (void)setRemindReceiveLabel:;
- (void)setEntranceArrowImageView:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
