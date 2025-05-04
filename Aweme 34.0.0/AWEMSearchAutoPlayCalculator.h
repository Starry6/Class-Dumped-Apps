@interface AWEMSearchAutoPlayCalculator : NSObject
@property (nonatomic) AWEMSearchAutoPlayController controller;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) @? visibleCardsBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVisibleCardsBlock:;
- (id)visibleCardsBlock;
- (void)updateCanActive:;
- (void)didForceBecomeActive:;
- (void)didBecomeActive;
- (void)setController:;
- (void)setScrollView:;
- (void)didResignActive;
- (id)scrollView;
- (void).cxx_destruct;
- (id)controller;
@end
