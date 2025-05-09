@interface AWEHomePageBubbleConfig : NSObject
@property (nonatomic) Q bubbleStyle;
@property (nonatomic) BOOL needOptimize;
@property (nonatomic) BOOL bigFontAdapt;
@property (nonatomic) BOOL isLimit115;
@property (nonatomic) UIColor darkBGColor;
@property (nonatomic) UIColor lightBGColor;
@property (nonatomic) UIColor darkTextColor;
@property (nonatomic) UIColor lightTextColor;
@property (nonatomic) UIImage darkPlaceHolder;
@property (nonatomic) UIImage lightPlaceHolder;
@property (nonatomic) UIFont textFont;
@property (nonatomic) UIBlurEffect darkBlurEffect;
@property (nonatomic) UIBlurEffect lightBlurEffect;
@property (nonatomic) UIColor darkLineColor;
@property (nonatomic) UIColor lightLineColor;
@property (nonatomic) UIColor darkLinkColor;
@property (nonatomic) UIColor lightLinkColor;
- (void)setLightTextColor:;
- (void)setDarkTextColor:;
- (id)lightBGColor;
- (void)setLightBGColor:;
- (id)darkBGColor;
- (void)setDarkBGColor:;
- (unsigned long long)bubbleStyle;
- (void)setBubbleStyle:;
- (BOOL)needOptimize;
- (void)setNeedOptimize:;
- (BOOL)bigFontAdapt;
- (void)setBigFontAdapt:;
- (BOOL)isLimit115;
- (void)setIsLimit115:;
- (id)darkPlaceHolder;
- (void)setDarkPlaceHolder:;
- (id)lightPlaceHolder;
- (void)setLightPlaceHolder:;
- (id)darkBlurEffect;
- (void)setDarkBlurEffect:;
- (id)lightBlurEffect;
- (void)setLightBlurEffect:;
- (id)darkLineColor;
- (void)setDarkLineColor:;
- (id)lightLineColor;
- (void)setLightLineColor:;
- (id)darkLinkColor;
- (void)setDarkLinkColor:;
- (id)lightLinkColor;
- (void)setLightLinkColor:;
- (id)lightTextColor;
- (id)textFont;
- (void).cxx_destruct;
- (id)darkTextColor;
- (void)setTextFont:;
@end
