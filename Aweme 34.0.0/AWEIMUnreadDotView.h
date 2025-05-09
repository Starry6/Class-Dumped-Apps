@interface AWEIMUnreadDotView : UIView
@property (nonatomic) UILabel dotLabel;
@property (nonatomic) q count;
@property (nonatomic) double unreadDotHeight;
@property (nonatomic) BOOL shouldDisablePlus;
- (id)dotLabel;
- (void)_disappear;
- (void)_appear;
- (void)setDotLabel:;
- (long long)countOfShowingNum;
- (void)setDotTextColor:;
- (void)setUnreadDotHeight:;
- (void)updateWithoutDotLabelWithSize:count:;
- (void)updateToDotViewWithSize:;
- (void)setDotLabelAlpha:;
- (void)setDotFont:;
- (void)setShouldDisablePlus:;
- (double)getDotHeight;
- (BOOL)shouldDisablePlus;
- (BOOL)bigFontV5Enable;
- (double)instanceGetUnreadDotViewFixWidth;
- (double)unreadDotHeight;
- (void)setLabelHidden:;
- (void)setCount:;
- (id)initWithFrame:;
- (long long)count;
- (void).cxx_destruct;
- (void)setLabelAlignment:;
- (void)updateWithCount:;
- (void)setDotColor:;
- (void)updateWithText:;
+ (double)getUnreadDotViewHeight;
+ (double)getUnreadDotViewFontSize;
+ (id)defaultDotColor;
+ (id)defaultDotTextColor;
+ (void)setDefaultDotColor:;
+ (void)setDefaultDotTextColor:;
+ (id)messageTabDotViewStyle;
+ (double)getUnreadDotViewFixWidth;
@end
