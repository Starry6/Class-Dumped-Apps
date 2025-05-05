@interface IESLiveSaaSAnnouncementCellItem : IESLiveSaaSGuideSettingCellItem
@property (nonatomic) IESLiveSaaSAnnouncementViewModel viewModel;
@property (nonatomic) q currentAnnouncementStatus;
@property (nonatomic) @? transitionBlock;
- (id)addText;
- (long long)currentAnnouncementStatus;
- (BOOL)isExtralStyle;
- (BOOL)isLightMode;
- (void)setTransitionBlock:;
- (void)refreshItem;
- (id)viewModel;
- (id)initWithViewModel:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setViewModel:;
- (void)setupCell;
- (id)transitionBlock;
@end
