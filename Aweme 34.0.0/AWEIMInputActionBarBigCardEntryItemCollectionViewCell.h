@interface AWEIMInputActionBarBigCardEntryItemCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView iconView;
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UIView contentsContainer;
@property (nonatomic) MASConstraint iconBottomToTitleTop;
@property (nonatomic) UIVisualEffectView blurView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) BOOL isHighlited;
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) AWEIMInputActionBarEntryItem entryItem;
- (void)p_setupUI;
- (BOOL)iPadAdapterEnabled;
- (void)addBlurView;
- (BOOL)isLightStyle;
- (void)refreshStyle;
- (void)setIsLightStyle:;
- (void)removeBlurView;
- (void)setIconBottomToTitleTop:;
- (void)__refreshBasicUI;
- (void)__resetAttributedContent;
- (void)__resetDisplayIcon;
- (id)entryItem;
- (void)__resetServerConfiguredIconIfNeeded;
- (id)p_getInteractiveEmoticonIconURL;
- (void)setEntryItem:;
- (void)setBlurImage:originView:;
- (id)iconBottomToTitleTop;
- (BOOL)isHighlited;
- (void)setIsHighlited:;
- (id)blurView;
- (void)setBlurView:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setHighlighted:;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)contentsContainer;
- (void)setContentsContainer:;
- (void)setBgImageView:;
- (id)bgImageView;
+ (double)cardHeightForIPad;
+ (id)__displayAttributedStringFromItem:;
+ (id)titleFont;
+ (double)cardWidth;
@end
