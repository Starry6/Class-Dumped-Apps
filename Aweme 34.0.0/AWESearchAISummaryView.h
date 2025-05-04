@interface AWESearchAISummaryView : AWESearchCachalotBaseCardView
@property (nonatomic) UIImageView buttonIcon;
@property (nonatomic) UILabel buttonTitle;
- (void)updateUIWithVideoPanelSuffix:;
- (void)updateUIWithDefaultContent;
- (id)init;
- (void).cxx_destruct;
- (id)buttonIcon;
- (void)setButtonIcon:;
- (id)buttonTitle;
- (void)setButtonTitle:;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:;
- (void)layoutUI;
+ (id)sizeWithViewModel:width:;
@end
