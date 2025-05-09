@interface AWEIMLittleEmoticonPreview : UIView
@property (nonatomic) UIView container;
@property (nonatomic) BDImageView content;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowTipView;
@property (nonatomic) BOOL ignoreTheme;
@property (nonatomic) MASConstraint arrowLeadingConstraint;
@property (nonatomic) AWEIMEmoticonThemeModel theme;
@property (nonatomic) AWEIMEmoticonModel model;
@property (nonatomic) q containerViewType;
@property (nonatomic) <AWEIMEmoticonPreviewDelegateProtocol> delegate;
@property (nonatomic) NSDictionary bizTrackInfos;
@property (nonatomic) NSDictionary convTrackInfos;
@property (nonatomic) NSURL contentRemoteUrl;
@property (nonatomic) NSString title;
@property (nonatomic) Q previewScene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)containerViewType;
- (void)setContainerViewType:;
- (id)initWithContainerViewType:ignoreTheme:;
- (void)setConvTrackInfos:;
- (void)setBizTrackInfos:;
- (void)setPreviewScene:;
- (id)sizeThatFitsContent:;
- (void)setArrowTipAnchorPointAtTop:;
- (void)setArrowTipAnchorPoint:;
- (void)__setupUIs:;
- (id)arrowLeadingConstraint;
- (id)arrowTipView;
- (void)setArrowLeadingConstraint:;
- (void)setArrowTipView:;
- (id)__currentDisplayNameWithModel:;
- (BOOL)ignoreTheme;
- (id)bizTrackInfos;
- (id)convTrackInfos;
- (unsigned long long)previewScene;
- (id)initWithContainerViewType:;
- (void)setPlaceHolderBGImage:;
- (id)contentRemoteUrl;
- (void)setContentRemoteUrl:;
- (void)setIgnoreTheme:;
- (id)__previewBackgroundColor;
- (id)theme;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (void)setTheme:;
- (id)content;
- (id)delegate;
- (id)initWithFrame:;
- (id)model;
- (void)setContent:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setTitle:;
@end
