@interface AWELeftSideBarRecentVisitMicroAppBannerCell : UICollectionViewCell
@property (nonatomic) AWELeftSideBarDynamicItemHighValueAppModel model;
@property (nonatomic) @? clickAction;
@property (nonatomic) DUXBaseImageView iconView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton jumpButton;
- (void)p_setupUI;
- (id)clickAction;
- (void)setClickAction:;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (void)trackImageLoadPerfWithParams:;
- (void)setJumpButton:;
- (id)jumpButton;
- (void)setModel:;
- (id)initWithFrame:;
- (id)iconView;
- (id)model;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
+ (double)iconViewSize;
+ (double)cellHeight;
@end
