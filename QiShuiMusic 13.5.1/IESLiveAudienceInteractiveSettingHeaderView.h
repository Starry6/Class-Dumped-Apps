@interface IESLiveAudienceInteractiveSettingHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UIView normalContentContainer;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) UIView paidQueueContainer;
@property (nonatomic) BOOL hasMoreButton;
@property (nonatomic) @? didClick;
@property (nonatomic) BOOL enablePaidQueue;
- (BOOL)enablePaidQueue;
- (id)didClick;
- (BOOL)hasMoreButton;
- (id)normalContentContainer;
- (void)p_moreButtonDidTap;
- (void)p_refreshPaidQueueView;
- (id)paidQueueContainer;
- (void)setDidClick:;
- (void)setEnablePaidQueue:;
- (void)setHasMoreButton:;
- (void)setNormalContentContainer:;
- (void)setPaidQueueContainer:;
- (id)initWithReuseIdentifier:;
- (void)setTitleLabel:;
- (void)setMoreButton:;
- (void).cxx_destruct;
- (id)moreButton;
- (id)titleLabel;
- (void)updateWithTitle:;
@end
