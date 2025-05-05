@interface IESLiveMultiKTVMidiTagView : UIView
@property (nonatomic) IESLiveMultiKTVMidiTagViewConfig config;
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) CAGradientLayer gradientBackgoundLayer;
@property (nonatomic) NSString textStr;
@property (nonatomic) NSString iconURLStr;
@property (nonatomic) NSArray backgroundColorStr;
- (id)textStr;
- (id)backgroundColorStr;
- (id)gradientBackgoundLayer;
- (id)iconURLStr;
- (id)initWithStyle:textStr:iconURLStr:backgroundColorStr:;
- (void)p_addView:;
- (void)p_removeView:;
- (void)p_setupUI;
- (void)setBackgroundColorStr:;
- (void)setGradientBackgoundLayer:;
- (void)setIconURLStr:;
- (void)setTextStr:;
- (id)textLabel;
- (id)intrinsicContentSize;
- (void)setConfig:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)config;
- (void)setTextLabel:;
@end
