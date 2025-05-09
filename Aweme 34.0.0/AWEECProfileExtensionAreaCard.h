@interface AWEECProfileExtensionAreaCard : UIView
@property (nonatomic) BDImageView leftImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView dotView;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) NSDictionary cardData;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) double cardWidth;
@property (nonatomic) Q cardIndex;
@property (nonatomic) BOOL isOrderCard;
@property (nonatomic) BOOL isIconRepeat;
@property (nonatomic) NSDictionary extraInfoDict;
@property (nonatomic) @? didTapCardViewBlock;
@property (nonatomic) <AWEECProfileExtensionAreaCardDelegate> delegate;
- (void)cardWillAppear;
- (void)cardDidDisappear;
- (id)cardModel;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (void)setCardModel:;
- (void)setDidTapCardViewBlock:;
- (id)didTapCardViewBlock;
- (double)widthOfCard;
- (void)setCardIndex:;
- (unsigned long long)cardIndex;
- (BOOL)shouldShowDot;
- (BOOL)userIsMaster;
- (void)setHasUnread:;
- (void)configHasUnread;
- (BOOL)isOrderCard;
- (BOOL)isIconRepeat;
- (void)setIsOrderCard:;
- (void)setIsIconRepeat:;
- (void)updateViewWithShowDot:;
- (void)updateOrderToast;
- (id)initWithUserModel:cardModel:extraInfoDict:cardIndex:cardData:isOrderCard:isIconRepeat:didTapCardViewBlock:;
- (BOOL)isDotViewHidden;
- (id)init;
- (id)delegate;
- (void)updateView;
- (void)setTitleLabel:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)titleLabel;
- (void)setDelegate:;
- (id)dotView;
- (void)setDotView:;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (id)cardData;
- (void)setCardData:;
- (void)viewTapped;
- (double)cardWidth;
- (void)setCardWidth:;
- (id)leftImageView;
- (BOOL)hasUnread;
- (void)setLeftImageView:;
@end
