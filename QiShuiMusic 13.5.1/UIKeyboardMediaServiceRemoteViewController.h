@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController
@property (nonatomic) BOOL _shownInline;
@property (nonatomic) <UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (void)requestInsertionPointCompletion:;
- (BOOL)_canShowWhileLocked;
- (void)stageStickerWithFileHandle:url:accessibilityLabel:;
- (void)pasteImageAtFileHandle:;
- (void)draggedStickerToPoint:;
- (id)delegate;
- (void).cxx_destruct;
- (void)presentCard;
- (void)dismissCard;
- (BOOL)__shouldRemoteViewControllerFenceGeometryChange:forAncestor:;
- (BOOL)_isShownInline;
- (void)_setShownInline:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestInlineViewControllerWithConnectionHandler:;
+ (id)requestCardViewControllerWithConnectionHandler:;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
@end
