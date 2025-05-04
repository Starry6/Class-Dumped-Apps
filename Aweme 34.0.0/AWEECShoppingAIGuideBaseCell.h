@interface AWEECShoppingAIGuideBaseCell : UICollectionViewCell
@property (nonatomic) AWEECShoppingAIGuideContext context;
@property (nonatomic) <AWEECShoppingAIGuideBaseCellDelegate> delegate;
- (BOOL)animateFromLeft;
- (void)playAppearAnimation;
- (id)delegate;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
- (id)animatingView;
@end
