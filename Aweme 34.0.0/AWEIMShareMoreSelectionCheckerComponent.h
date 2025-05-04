@interface AWEIMShareMoreSelectionCheckerComponent : AWEIMComponentBase
@property (nonatomic) q maxSelectNum;
@property (nonatomic) AWEIMShareListSelectUserController selectUserController;
@property (nonatomic) <IESIMContactPickerSelectService> selectService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)selectUserController;
- (void)setSelectUserController:;
- (BOOL)shouldSelectAndAutoToastShareModel:;
- (id)contactPickerSelectService:canAddIdentifier:;
- (long long)checkerPriorityForContactPickerSelectService:;
- (void)setMaxSelectNum:;
- (id)p_makeSelectUserControllerWithContext:;
- (void)setSelectService:;
- (id)selectService;
- (long long)maxSelectNum;
- (void).cxx_destruct;
@end
