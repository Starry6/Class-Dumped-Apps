@interface IESECGoodsFeedResourceCardWindowView : UIView
@property (nonatomic) UIButton linkButton;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UILabel followStatusLabel;
@property (nonatomic) UILabel windowInterestLabel;
@property (nonatomic) UIView followStatusBackgroundView;
@property (nonatomic) UIImageView authorAvartarImageView;
@property (nonatomic) NSMutableArray cardList;
- (id)authorNameLabel;
- (id)authorAvartarImageView;
- (id)cardList;
- (id)followStatusBackgroundView;
- (id)followStatusLabel;
- (id)getProductFrameWithIndex:;
- (void)setAuthorAvartarImageView:;
- (void)setAuthorNameLabel:;
- (void)setCardList:;
- (void)setFollowStatusBackgroundView:;
- (void)setFollowStatusLabel:;
- (void)setWindowInterestLabel:;
- (void)setupUIWithModel:;
- (id)windowInterestLabel;
- (void).cxx_destruct;
- (id)linkButton;
- (void)setLinkButton:;
@end
