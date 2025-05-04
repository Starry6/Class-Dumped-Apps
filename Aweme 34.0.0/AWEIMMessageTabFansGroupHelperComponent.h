@interface AWEIMMessageTabFansGroupHelperComponent : AWEIMComponentBase
@property (nonatomic) AWEButton barFansGroupHelperButton;
@property (nonatomic) <AWEIMMessageTabPlusButtonInterface> plusButtonService;
@property (nonatomic) <AWEIMMessageTabModeInterface> messageTabModeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (BOOL)canShowInPlusPanel;
- (void)setMessageTabModeService:;
- (id)messageTabModeService;
- (id)plusButtonModel;
- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (BOOL)canShowEntryView;
- (void)setPlusButtonService:;
- (id)plusButtonService;
- (id)barFansGroupHelperButton;
- (void)p_didClickHelperButton;
- (void)p_trackFansGroupHelperClicked;
- (void)p_transferToFansGroupHelper;
- (void)setBarFansGroupHelperButton:;
- (void).cxx_destruct;
+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
@end
