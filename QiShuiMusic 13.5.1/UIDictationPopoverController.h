@interface UIDictationPopoverController : UIKeyboardPopoverController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sourceRect;
- (long long)overrideUserInterfaceStyle;
- (void)dealloc;
- (void)textDidChange:;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)setRemoteDictationPopover:;
- (void)_geometryChanged:forAncestor:;
- (void)_observeScrollViewDidScroll:;
- (void)viewDidAppear:;
- (void)viewDidLoad;
- (void)keyboardDidChange:;
- (id)initWithContentView:contentSize:inputDelegate:;
- (void)forwardRemoteDictationPopover:;
- (id)clipBounds;
- (void)movePopoverView:;
- (void)movePopoverView:editMenuFrame:;
- (void)movePopoverViewToCurrentCareLocation;
- (void)movePopoverViewForEditMenuFrame:;
- (id)rectInWindow:;
- (BOOL)canPresentTip;
- (void)presentTip:tipDescription:;
- (void)dismissTip;
@end
