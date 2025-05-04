@interface AWEIMShareDSPMusicContentPresenter : AWEIMUIViewPresenter
@property (nonatomic) @? cardTapBlock;
@property (nonatomic) UITapGestureRecognizer tapCardGestureRecognizer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)willUnBindView:;
- (id)tapCardGestureRecognizer;
- (void)p_didTappedCard:;
- (id)cardTapBlock;
- (void)setCardTapBlock:;
- (void)setTapCardGestureRecognizer:;
- (void).cxx_destruct;
@end
