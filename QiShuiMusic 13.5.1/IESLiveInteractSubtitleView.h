@interface IESLiveInteractSubtitleView : UIControl
@property (nonatomic) IESLiveInteractSubtitleNormalView normalView;
@property (nonatomic) IESLiveInteractSubtitleSingleUserView singleUserView;
@property (nonatomic) UIView parentView;
@property (nonatomic) UIImageView deleteIconView;
@property (nonatomic) UILabel deleteLabelView;
@property (nonatomic) UIView topGrayView;
@property (nonatomic) UIView bottomGrayView;
@property (nonatomic) IESLiveInteractSubtitleBorderView borderView;
@property (nonatomic) CAShapeLayer dottedLineBorder;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) IESLiveInteractSubtitleConfig config;
@property (nonatomic) BOOL isFeed;
@property (nonatomic) BOOL centerDidChanged;
- (void)setTopGrayView:;
- (void)setTrackParams:;
- (id)deleteLabelView;
- (id)bottomGrayView;
- (BOOL)centerDidChanged;
- (id)checkPosition:editMode:;
- (id)deleteIconView;
- (void)deleteSubtitleView;
- (id)dottedLineBorder;
- (void)dragAction:;
- (void)enterEditStyle;
- (void)exitEditStyle;
- (id)getDefaultStartPoint:;
- (id)initWithViewModel:isFeed:config:;
- (BOOL)isFeed;
- (void)needUpdatePosition;
- (id)normalView;
- (void)setBottomGrayView:;
- (void)setCenterDidChanged:;
- (void)setDeleteIconView:;
- (void)setDeleteLabelView:;
- (void)setDictForTrack:;
- (void)setDottedLineBorder:;
- (void)setIsFeed:;
- (void)setNormalView:;
- (void)setSingleUserView:;
- (void)setupSubtitle;
- (void)setupViews:;
- (void)showWithNodeWithParentView:;
- (id)singleUserView;
- (id)topGrayView;
- (id)trackParams;
- (void)updateToDefaultPointIfNeeded;
- (void)updateUsers:;
- (void)setConfig:;
- (void).cxx_destruct;
- (void)setClickEvent:;
- (id)config;
- (id)parentView;
- (void)setParentView:;
- (id)borderView;
- (void)setBorderView:;
- (void)resize;
@end
