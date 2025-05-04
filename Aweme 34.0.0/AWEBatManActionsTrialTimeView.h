@interface AWEBatManActionsTrialTimeView : UIView
@property (nonatomic) UILabel trialTimeLbl;
@property (nonatomic) <AWEBatManActionsTrialTimeViewDelegate> delegate;
- (void)updateTrialTime:isUnlimited:;
- (void)setTrialTimeLbl:;
- (void)onTimeBtnClicked;
- (id)trialTimeLbl;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)createUI;
@end
