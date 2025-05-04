@interface AWESpecialCardButtonConfig : NSObject
@property (nonatomic) NSString buttonTitle;
@property (nonatomic) UIColor buttonTextColor;
@property (nonatomic) UIColor buttonBGColor;
@property (nonatomic) UIImage icon;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) Q iconPosition;
- (id)iconUrl;
- (void)setIconUrl:;
- (void)setIconPosition:;
- (unsigned long long)iconPosition;
- (void)setButtonBGColor:;
- (id)buttonBGColor;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)buttonTitle;
- (id)buttonTextColor;
- (void)setButtonTextColor:;
- (void)setButtonTitle:;
@end
