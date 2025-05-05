@interface IESECGoodsFeedResourceCardStoreView : UIView
@property (nonatomic) UIImageView storeAvatar;
@property (nonatomic) UIView entranceButton;
@property (nonatomic) UIStackView titleStack;
@property (nonatomic) UIStackView recommendStack;
@property (nonatomic) double cardWidth;
- (void)setStoreAvatar:;
- (void)addSubviews;
- (id)entranceButton;
- (id)recommendStack;
- (void)setEntranceButton:;
- (void)setRecommendStack:;
- (void)setupUIWithModel:;
- (id)storeAvatar;
- (id)trimStoreTitle:font:;
- (id)init;
- (void).cxx_destruct;
- (id)titleStack;
- (void)setTitleStack:;
- (double)cardWidth;
- (void)setCardWidth:;
@end
