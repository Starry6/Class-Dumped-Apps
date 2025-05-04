@interface AWEPOIDetailLocationBottomBarComponentViewModel : DitoComponentViewModel
@property (nonatomic) NSString cardKey;
@property (nonatomic) q cardPriority;
@property (nonatomic) DUXBottomNotification locationBottomBar;
- (void)setCardKey:;
- (id)cardKey;
- (void)bindStateAndAction;
- (long long)cardPriority;
- (void)setCardPriority:;
- (void)showLocationBottomBar:;
- (id)locationBottomBar;
- (void)setLocationBottomBar:;
- (id)initWithNode:;
- (void).cxx_destruct;
@end
