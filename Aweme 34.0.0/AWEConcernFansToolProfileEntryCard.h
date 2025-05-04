@interface AWEConcernFansToolProfileEntryCard : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView dotView;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) double cardWidth;
- (id)cardModel;
- (void)__setupUI;
- (void)setCardModel:;
- (double)widthOfCard;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (void)updateViewWithUserModel:cardModel:;
- (id)init;
- (void)updateView;
- (id)iconImageView;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)dotView;
- (void)setDotView:;
- (void)setIconImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (double)cardWidth;
- (void)setCardWidth:;
@end
