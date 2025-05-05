@interface PHEditingExtensionContext : NSExtensionContext
@property (nonatomic) PUEditingInitialPayload _initialPayload;
@property (nonatomic) PUEditingExtensionUndoAdapter undoAdapter;
@property (nonatomic) BOOL attemptUndoManagerAutoSetup;
@property (nonatomic) NSUndoManager undoManagerForBarButtons;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_initialPayload;
- (void)beginContentEditingWithCompletionHandler:;
- (void)finishContentEditing;
- (void)cancelContentEditingWithResponseHandler:;
- (void)queryHandlingCapabilityForAdjustmentData:withResponseHandler:;
- (void)querySDKVersionWithResponseHandler:;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:;
- (void)setupUndoProxyWithXPCListenerEndpoint:attemptUndoManagerAutoSetup:;
- (id)_contentEditingController;
- (void)_releaseSandboxExtensions;
- (void)setUndoManagerForBarButtons:;
- (id)undoAdapter;
- (void)setUndoAdapter:;
- (BOOL)attemptUndoManagerAutoSetup;
- (void)setAttemptUndoManagerAutoSetup:;
- (id)undoManagerForBarButtons;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@end
