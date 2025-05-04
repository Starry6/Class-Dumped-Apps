@interface AWEECOMIMModifyAmountView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel unitLabel;
@property (nonatomic) UILabel currentLabel;
@property (nonatomic) YYLabel originalLabel;
@property (nonatomic) NSString title;
- (void)setOriginalLabel:;
- (void)setCurrentAmount:originalAmount:;
- (id)originalLabel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)updateWithData:;
- (void)setTitle:;
- (id)currentLabel;
- (void)setCurrentLabel:;
- (void)setUnitLabel:;
- (id)unitLabel;
+ (double)designHeight;
+ (id)priceShow:;
@end
