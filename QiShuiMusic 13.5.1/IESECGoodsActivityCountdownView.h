@interface IESECGoodsActivityCountdownView : UIView
@property (nonatomic) UILabel hourLabel;
@property (nonatomic) UILabel minLabel;
@property (nonatomic) UILabel secondLabel;
- (void)setHourLabel:;
- (void)updateTime:;
- (id)timeLabel;
- (id)initWithParameters:;
- (void).cxx_destruct;
- (id)hourLabel;
- (id)minLabel;
- (void)setMinLabel:;
- (void)setupUI;
- (id)secondLabel;
- (void)setSecondLabel:;
@end
