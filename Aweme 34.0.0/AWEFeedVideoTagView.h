@interface AWEFeedVideoTagView : UIView
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIImageView tagIcon;
- (id)tagIcon;
- (void)setTagIcon:;
- (id)tagLabel;
- (void)setTagLabel:;
- (id)hexStringFromString:;
- (void)setText:withLeftRightPadding:;
- (void)setBackgroundColorWithString:;
- (void)setTextColorWithString:;
- (void)setIconImage:withLeftRightPadding:;
- (void)setText:;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (id)preferredLabelFont;
+ (double)viewWidthWithText:preferredMaxWidth:;
@end
