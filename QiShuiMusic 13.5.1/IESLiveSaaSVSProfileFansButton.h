@interface IESLiveSaaSVSProfileFansButton : UIButton
@property (nonatomic) BOOL markLayoutComponentsIfNeeded;
@property (nonatomic) UILabel fansClubLevel;
@property (nonatomic) UIImageView joinedFansClubImage;
@property (nonatomic) UIImageView addImage;
@property (nonatomic) BOOL showNormalFansImg;
- (id)fansClubLevel;
- (id)joinedFansClubImage;
- (void)layoutComponentsIfNeeded;
- (BOOL)markLayoutComponentsIfNeeded;
- (void)setFansClubLevel:;
- (void)setJoinedFansClubImage:;
- (void)setMarkLayoutComponentsIfNeeded:;
- (void)setShowNormalFansImg:;
- (BOOL)showNormalFansImg;
- (void)updateFansLevel:;
- (id)init;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)addImage;
- (void)setAddImage:;
- (void)layoutComponents;
@end
