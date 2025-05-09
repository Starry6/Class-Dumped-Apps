@interface AWEProfileMixCreateTipCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEButton closeButton;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UILabel mainTipLabel;
@property (nonatomic) UILabel subTipLabel;
@property (nonatomic) NSString userID;
@property (nonatomic) @? actionBlock;
- (void)awe_themeReload;
- (void)actionButtonClicked;
- (void)closeButtonClicked;
- (id)subTipLabel;
- (void)setSubTipLabel:;
- (id)mainTipLabel;
- (void)setMainTipLabel:;
- (void)configWithMixCreateRecommendTipModel:userID:;
- (void)trackMixVideoTipShow;
- (void)updateMixVideoTipShow;
- (void)recordMixVideoTipClick;
- (void)resetMixVideoTipsShow;
- (void)trackMixVideoTipClick;
- (void)recordMixVideoTipClose;
- (id)userID;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setUserID:;
- (id)coverView;
- (void)setCoverView:;
- (void)setupUI;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)actionButton;
- (void)setActionButton:;
- (void)setCloseButton:;
- (id)closeButton;
+ (BOOL)shouldShowMixCreateTip;
+ (id)profileMixVideoTipClickTimeRecordKey;
+ (id)profileMixVideoTipShowTimeRecordKey;
+ (id)profileMixVideoTipCloseTimeRecordKey;
+ (id)identifier;
+ (id)itemSize;
@end
