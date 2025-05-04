@interface AWEModernFeedAiToTextView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView AiIconImage;
@property (nonatomic) UIImageView arrowImage;
@property (nonatomic) BOOL buttonStyle;
- (id)AiIconImage;
- (BOOL)isButtonStyle;
- (void)setAiIconImage:;
- (id)init;
- (void)setTitleLabel:;
- (void)setButtonStyle:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)arrowImage;
- (void)setArrowImage:;
- (void)updateWithTitle:;
@end
