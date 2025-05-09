@interface WKFileUploadPanel : UIViewController
@property (nonatomic) <WKFileUploadPanelDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentationControllerDidDismiss:;
- (void)dismiss;
- (id)initWithView:;
- (void)dealloc;
- (id)contextMenuInteraction:configuration:highlightPreviewForItemWithIdentifier:;
- (void)setDelegate:;
- (void)_cancel;
- (id)_contextMenuInteraction:styleForMenuWithConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (id)delegate;
- (void).cxx_destruct;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
- (id).cxx_construct;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)imagePickerController:didFinishPickingMultipleMediaWithInfo:;
- (void)documentPickerWasCancelled:;
- (void)documentPicker:didPickDocumentsAtURLs:;
- (void)_dispatchDidDismiss;
- (void)_adjustMediaCaptureType;
- (BOOL)_shouldMediaCaptureOpenMediaDevice;
- (id)_mediaTypesForPickerSourceType:;
- (void)_showPhotoPickerWithSourceType:;
- (id)_cameraButtonLabel;
- (void)_presentFullscreenViewController:animated:;
- (void)_dismissDisplayAnimated:;
- (void)_processMediaInfoDictionaries:successBlock:failureBlock:;
- (void)_uploadItemForImageData:imageName:successBlock:failureBlock:;
- (void)_uploadItemForJPEGRepresentationOfImage:successBlock:failureBlock:;
- (void)_uploadItemFromMediaInfo:successBlock:failureBlock:;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)_chooseMediaItems:;
- (void)_chooseFiles:displayString:iconImage:;
- (void)presentWithParameters:resultListener:;
- (id)currentAvailableActionTitles;
- (id)acceptedTypeIdentifiers;
- (id)_chooseFilesButtonLabel;
- (id)_photoLibraryButtonLabel;
- (void)removeContextMenuInteraction;
- (id)ensureContextMenuInteraction;
- (void)repositionContextMenuIfNeeded;
- (void)showFilePickerMenu;
- (void)showDocumentPickerMenu;
- (void)_processMediaInfoDictionaries:atIndex:processedResults:successBlock:failureBlock:;
- (void)_uploadMediaItemsTranscodingVideo:;
- (BOOL)platformSupportsPickerViewController;
@end
