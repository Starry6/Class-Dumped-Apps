@interface AWEIMMessageTabEnterpriseServiceCenterComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (BOOL)canShowInPlusPanel;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (id)plusButtonModel;
- (void)p_didClickInPlusPanel;
- (long long)buttonPosition;
- (void).cxx_destruct;
@end
