@interface AWEIMFansGroupProfileEntryCard : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) IESIMUserModel userModel;
@property (nonatomic) double cardWidth;
- (void)__setupUI;
- (id)cardModel;
- (id)mainTitleLabel;
- (void)setCardModel:;
- (void)setMainTitleLabel:;
- (void)updateViewWithUserModel:cardModel:;
- (double)widthOfCard;
- (void)updateView;
- (id)init;
- (void)setUserModel:;
- (id)userModel;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (double)cardWidth;
- (void)setCardWidth:;
@end
