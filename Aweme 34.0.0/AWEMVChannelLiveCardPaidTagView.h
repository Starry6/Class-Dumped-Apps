@interface AWEMVChannelLiveCardPaidTagView : UIView
@property (nonatomic) UILabel paidTagLabel;
@property (nonatomic) UILabel countDownLabel;
@property (nonatomic) UILabel paidLabel;
@property (nonatomic) q tagType;
- (id)countDownLabel;
- (void)setCountDownLabel:;
- (void)setupSubViews;
- (void)updatePaidTagType:;
- (double)currentPaidTagWidth;
- (void)updateCountDownLabel:;
- (id)paidTagLabel;
- (id)paidLabel;
- (void)setPaidTagLabel:;
- (void)setPaidLabel:;
- (long long)tagType;
- (id)init;
- (void).cxx_destruct;
- (void)setTagType:;
@end
