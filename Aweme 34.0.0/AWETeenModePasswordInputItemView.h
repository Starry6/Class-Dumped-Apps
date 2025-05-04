@interface AWETeenModePasswordInputItemView : UIView
@property (nonatomic) Q borderType;
@property (nonatomic) Q inputType;
@property (nonatomic) UIView lineView;
@property (nonatomic) UIView boxView;
@property (nonatomic) UIView dotView;
@property (nonatomic) UILabel numberView;
@property (nonatomic) UIColor tintColor;
- (id)numberView;
- (id)initWithBorderType:inputType:;
- (void)setNumberView:;
- (void)setTintColor:;
- (id)tintColor;
- (void).cxx_destruct;
- (void)setNumber:;
- (id)dotView;
- (unsigned long long)inputType;
- (id)lineView;
- (void)setActive:animated:;
- (void)setDotView:;
- (void)setLineView:;
- (void)setupSubviews;
- (void)setInputType:;
- (unsigned long long)borderType;
- (void)setBorderType:;
- (id)boxView;
- (void)setBoxView:;
@end
