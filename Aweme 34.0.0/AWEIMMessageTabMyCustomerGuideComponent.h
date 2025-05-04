@interface AWEIMMessageTabMyCustomerGuideComponent : AWEIMComponentBase
@property (nonatomic) UIView bubble;
@property (nonatomic) <AWEIMMessageTabMyCustomerInterface> myCustomerService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (BOOL)canShowBubble;
- (void)showBubbleInNavigationBar:;
- (BOOL)isCurrentBubbleDisplaying;
- (void)setMyCustomerService:;
- (id)myCustomerService;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
@end
