@interface AWEOpenPlatformAuthUserTipCell : UITableViewCell
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) q uiCase;
@property (nonatomic) BOOL isHalf;
- (void)updateTip:;
- (BOOL)isHalf;
- (void)setIsHalf:;
- (id)initWithStyle:reuseIdentifier:uiCase:isHalf:;
- (long long)uiCase;
- (void)setUiCase:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
+ (id)tipLabelHeightWithText:maxWidth:uiCase:;
+ (id)tipsLableFontWithUICase:;
+ (double)cellHeightWithAuthUICase:tipText:maxWidth:;
@end
