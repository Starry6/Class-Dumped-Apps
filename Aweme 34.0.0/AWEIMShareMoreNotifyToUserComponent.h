@interface AWEIMShareMoreNotifyToUserComponent : AWEIMComponentBase
@property (nonatomic) IESIMShareMoreSelectionContext selectionContext;
@property (nonatomic) IESIMContactPickerComponentContext pickerComponent;
@property (nonatomic) NSMutableArray sharedUserIDList;
@property (nonatomic) NSMutableArray sharedUIDList;
@property (nonatomic) NSMutableArray sharedSecUIDList;
@property (nonatomic) NSMutableArray sharedCIDList;
@property (nonatomic) BOOL hasShare;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)halfScreenContainerVCDidDismiss;
- (void)halfScreenContainerVCWillDismiss;
- (void)didClickFullScreenCloseButton:closeByUser:completion:;
- (void)messageBaseViewControllerDidAppear:;
- (void)p_postSelfDidDisapperNotification;
- (void)setSharedUserIDList:;
- (void)setSharedUIDList:;
- (void)setSharedSecUIDList:;
- (void)setSharedCIDList:;
- (id)sharedUserIDList;
- (void)performOpenShareCompletionWithStatusCode:needTransferBack:;
- (void)p_triggerShareResultWithCallbackStrategy:;
- (id)sharedCIDList;
- (id)sharedUIDList;
- (id)sharedSecUIDList;
- (void)setPickerComponent:;
- (id)pickerComponent;
- (void)startShareNotifyWithNeedCreateGroup:text:;
- (void)dismissVerticalSharePanel:closeByUser:completion:;
- (id)getSelectedShareList;
- (id)p_currentAwemeModel;
- (void)setHasShare:;
- (void)dealloc;
- (id)selectionContext;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:;
- (void)applicationProtectedDataWillBecomeUnavailable:;
- (BOOL)hasShare;
- (void)setSelectionContext:;
- (void)p_addObservers;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
@end
