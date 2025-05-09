@interface AWESharePanelView : UIView
@property (nonatomic) BOOL dark;
@property (nonatomic) NSArray platforms;
@property (nonatomic) UIView blurView;
@property (nonatomic) UIView shareTitleContainerView;
@property (nonatomic) UILabel shareHintLabel;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) UIView scrollViewLeadingContentOffsetView;
@property (nonatomic) UIView cancelButtonContainerView;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSArray itemViews;
@property (nonatomic) <AWESharePanelViewDelegate> delegate;
@property (nonatomic) double scrollViewLeadingContentOffset;
@property (nonatomic) UIImage customLocalSaveImage;
@property (nonatomic) NSString customLocalSaveTitle;
- (void)setPlatforms:;
- (id)shareHintLabel;
- (void)setShareHintLabel:;
- (id)initWithPlatforms:isDark:;
- (void)setCustomLocalSaveImage:;
- (void)setCustomLocalSaveTitle:;
- (void)setupPanel;
- (id)p_maskLayerForRect:;
- (void)updateLayoutForHotSearch;
- (void)updateLayoutWithTargetType:;
- (id)shareTitleContainerView;
- (void)p_configShareItems;
- (void)setCancelButtonContainerView:;
- (id)cancelButtonContainerView;
- (id)p_imageForShareType:;
- (id)p_titleForShareType:;
- (void)onTapShareItem:;
- (id)customLocalSaveImage;
- (id)customLocalSaveTitle;
- (void)setScrollViewLeadingContentOffset:;
- (void)onTapCancelButton:;
- (void)resetScrollViewLeadingContentOffsetAnimated:;
- (double)scrollViewLeadingContentOffset;
- (void)setShareTitleContainerView:;
- (id)scrollViewLeadingContentOffsetView;
- (void)setScrollViewLeadingContentOffsetView:;
- (BOOL)isDark;
- (void)setScrollView:;
- (void)setCancelButton:;
- (id)delegate;
- (id)blurView;
- (void)setBlurView:;
- (id)scrollView;
- (void)setBounds:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)itemViews;
- (void)setItemViews:;
- (void)setDark:;
- (id)platforms;
@end
