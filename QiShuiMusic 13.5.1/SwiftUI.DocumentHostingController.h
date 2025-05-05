@interface SwiftUI.DocumentHostingController : _TtGC7SwiftUI19UIHostingControllerGVS_15ModifiedContentGS1_VS_7AnyViewVS_12RootModifier_VS_29ObservableDocumentBoxModifier__
@property (nonatomic) NSUndoManager undoManager;
@property (nonatomic) NSArray keyCommands;
@property (nonatomic) UINavigationItem navigationItem;
- (void)redo:;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (id)keyCommands;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (void)undo:;
- (id)undoManager;
- (id)navigationItem;
@end
