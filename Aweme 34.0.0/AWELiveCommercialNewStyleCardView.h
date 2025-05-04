@interface AWELiveCommercialNewStyleCardView : UIView
@property (nonatomic) AWELiveCommercialNewStyleNativeCardView nativeCardView;
@property (nonatomic) AWEOriginalAdCardModel cardModel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) @? cardClickBlock;
@property (nonatomic) @? closeBtnTapToDisappearCardCompletionBlock;
- (void)configCardData:;
- (id)cardModel;
- (void)hideCompletion;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)setCardModel:;
- (id)closeBtnTapToDisappearCardCompletionBlock;
- (void)setCloseBtnTapToDisappearCardCompletionBlock:;
- (void)setCardClickBlock:;
- (id)cardClickBlock;
- (void)closeBtnTapped;
- (id)pluginLayoutContentSize;
- (id)nativeCardView;
- (void)updateNativeCardUI;
- (void)cardTapped:;
- (void)setNativeCardView:;
- (void).cxx_destruct;
- (id)viewType;
@end
