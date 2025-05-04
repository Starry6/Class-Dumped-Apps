@interface AWEIMMessageTabFansGroupHelpGuideComponent : AWEIMComponentBase
@property (nonatomic) UIView bubble;
@property (nonatomic) <AWEIMMessageTabFansGroupHelperInterface> fansGroupHelperService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (BOOL)canShowBubble;
- (void)showBubbleInNavigationBar:;
- (BOOL)isCurrentBubbleDisplaying;
- (void)setFansGroupHelperService:;
- (id)fansGroupHelperService;
- (BOOL)p_shouldShowFansGroupHelperBubble;
- (void)p_showFansGroupHelperBubbleInNavigationBar:;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
@end
