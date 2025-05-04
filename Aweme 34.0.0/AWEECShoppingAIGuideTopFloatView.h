@interface AWEECShoppingAIGuideTopFloatView : UIView
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> cardView;
@property (nonatomic) double cardViewHeight;
@property (nonatomic) <AWEECShoppingAIGuideTopFloatViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didChangeIntrinsicContentSize:;
- (void)buildCardViewWithLynxModel:type:;
- (double)cardViewHeight;
- (void)setCardViewHeight:;
- (void)addCardViewIfNeeded;
- (void)createCardViewWithLynxModel:cardType:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)cardView;
- (void)setCardView:;
@end
