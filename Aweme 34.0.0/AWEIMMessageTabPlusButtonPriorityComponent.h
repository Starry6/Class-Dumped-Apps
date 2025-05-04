@interface AWEIMMessageTabPlusButtonPriorityComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (id)plusButtonComponentsArray;
- (void).cxx_destruct;
@end
