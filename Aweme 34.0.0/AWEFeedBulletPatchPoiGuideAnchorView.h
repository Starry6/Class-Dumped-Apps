@interface AWEFeedBulletPatchPoiGuideAnchorView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UILabel actionLabel;
@property (nonatomic) UIImageView closeImageView;
- (void)p_setupUI;
- (void)updateInfoText:actionText:;
- (id)init;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)infoLabel;
- (void)setIconImageView:;
- (id)actionLabel;
- (void)setActionLabel:;
- (void)setInfoLabel:;
- (id)closeImageView;
- (void)setCloseImageView:;
@end
