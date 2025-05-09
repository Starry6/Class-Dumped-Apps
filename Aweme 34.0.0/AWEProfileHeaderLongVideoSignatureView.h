@interface AWEProfileHeaderLongVideoSignatureView : UIView
@property (nonatomic) UIView noticeContainerView;
@property (nonatomic) UIImageView noticeIconImageView;
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) NSAttributedString introInfoIconAttributedString;
@property (nonatomic) YYLabel introInfoLabel;
@property (nonatomic) UIButton moreIntroInfoButton;
@property (nonatomic) AWEProfileHeaderContext context;
@property (nonatomic) <AWEProfileHeaderLongVideoSignatureViewDelegate> delegate;
- (BOOL)shouldAdaptBigFontMode;
- (void)configWithContext:;
- (double)adaptBigFontModeViewWidth:;
- (id)adaptBigFontModeImage:;
- (id)noticeContainerView;
- (void)setNoticeContainerView:;
- (id)noticeIconImageView;
- (id)moreIntroInfoButton;
- (id)introAttributedStringWithText:;
- (id)introInfoLabel;
- (id)adaptBigFontModeViewSize:;
- (id)moreIntroInfoButtonSize;
- (id)titleFontOfClass:weight:;
- (id)introInfoIconAttributedString;
- (void)didTapMoreIntroInfoButton:;
- (void)setNoticeIconImageView:;
- (void)setIntroInfoIconAttributedString:;
- (void)setIntroInfoLabel:;
- (void)setMoreIntroInfoButton:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (void)setupUI;
- (void)setNoticeLabel:;
- (id)noticeLabel;
+ (double)viewHeightWithContext:;
+ (double)introHeightWithContext:;
@end
