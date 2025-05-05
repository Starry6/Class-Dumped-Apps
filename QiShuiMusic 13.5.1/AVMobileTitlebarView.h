@interface AVMobileTitlebarView : AVView
@property (nonatomic) AVMobileChromelessControlsStyleSheet styleSheet;
@property (nonatomic) <AVMobileTitlebarViewDelegate> delegate;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL showsInfoAffordance;
@property (nonatomic) AVMobileContentTag contentTag;
- (id)initWithStyleSheet:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentTag:;
- (void)setStyleSheet:;
- (void)setDelegate:;
- (void)_infoAffordancePressed:;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:;
- (id)styleSheet;
- (id)contentTag;
- (id)title;
- (id)delegate;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)subtitle;
- (void)setShowsInfoAffordance:;
- (BOOL)showsInfoAffordance;
@end
