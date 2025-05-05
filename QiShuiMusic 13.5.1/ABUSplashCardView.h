@interface ABUSplashCardView : UIView
@property (nonatomic) @? showSplashCardInRootVC;
@property (nonatomic) UIViewController rootVC;
@property (nonatomic) <ABUSplashCardViewDelegate> delegate;
- (id)initWithCardView:;
- (id)rootVC;
- (void)setRootVC:;
- (void)setShowSplashCardInRootVC:;
- (id)showSplashCardInRootVC;
- (void)showSplashCardInRootVC:;
- (id)init;
- (id)rootViewController;
- (BOOL)isMemberOfClass:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)cardView;
- (void)setCardView:;
@end
