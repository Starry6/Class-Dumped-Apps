@interface AWEECShoppingAIGuideIncomingBubble : AWEECShoppingAIGuideBubble
@property (nonatomic) BOOL isTop;
@property (nonatomic) BOOL isBottom;
- (void)setIsTop:;
- (void)configBubbleTop:bottom:;
- (void)setIsBottom:;
- (id)initWithFrame:;
- (void)layoutSubviews;
- (BOOL)isBottom;
- (BOOL)isTop;
@end
