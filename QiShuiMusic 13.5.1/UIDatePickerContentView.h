@interface UIDatePickerContentView : UIView
@property (nonatomic) _UIDatePickerMode mode;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) double titleLabelMaxX;
@property (nonatomic) BOOL isAmPm;
@property (nonatomic) BOOL useDigitFont;
@property (nonatomic) q titleAlignment;
- (void)setTitleAlignment:;
- (long long)titleAlignment;
- (id)initWithMode:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)mode;
- (id)titleLabel;
- (BOOL)_canBeReusedInPickerView;
- (void)setMode:;
- (BOOL)isAmPm;
- (void)setIsAmPm:;
- (BOOL)useDigitFont;
- (void)setUseDigitFont:;
- (void)setTitleLabelMaxX:;
- (double)titleLabelMaxX;
@end
