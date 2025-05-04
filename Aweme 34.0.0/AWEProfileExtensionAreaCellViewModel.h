@interface AWEProfileExtensionAreaCellViewModel : NSObject
@property (nonatomic) <AWEProfileExtensionAreaCardControllerProtocol> cardController;
@property (nonatomic) AWEProfileExtensionAreaCardModel cardModel;
@property (nonatomic) UIView<AWEProfileExtensionAreaCardViewInternalProtocol> cardView;
@property (nonatomic) Q cardIndex;
@property (nonatomic) double customDetailViewWidth;
@property (nonatomic) {CGSize=dd} estimatedSize;
- (id)cardModel;
- (void)setCardModel:;
- (void)setCardIndex:;
- (unsigned long long)cardIndex;
- (double)customDetailViewWidth;
- (void)setCustomDetailViewWidth:;
- (id)cellLayoutSize;
- (void)setCardController:;
- (id)cardController;
- (id)init;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
- (id)estimatedSize;
- (void)setEstimatedSize:;
@end
