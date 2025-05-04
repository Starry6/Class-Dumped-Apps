@interface AWEIMMultiSelectMessageComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessageListViewController messageListViewController;
@property (nonatomic) NSArray selectMsgList;
@property (nonatomic) BOOL isMultiSelect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (id)messageListViewController;
- (void)setSelectMsgList:;
- (void)changeToMultiselect:;
- (id)selectMsgList;
- (void)p_changeUIToEditMode:animated:isInit:;
- (void)clearMultiSelectState;
- (void)p_changeUIToEditMode:animated:;
- (void)multiSelectMessage;
- (void)setMessageListViewController:;
- (void).cxx_destruct;
- (BOOL)isMultiSelect;
- (void)setIsMultiSelect:;
+ (BOOL)canCreateComponentWithContext:;
@end
