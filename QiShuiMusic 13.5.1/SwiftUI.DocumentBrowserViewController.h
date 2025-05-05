@interface SwiftUI.DocumentBrowserViewController : UIDocumentBrowserViewController
- (id)animationControllerForPresentedController:presentingController:sourceController:;
- (id)animationControllerForDismissedController:;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)documentBrowser:didPickDocumentsAtURLs:;
- (void)documentBrowser:didRequestDocumentCreationWithHandler:;
- (void)documentBrowser:didImportDocumentAtURL:toDestinationURL:;
- (void)documentBrowser:failedToImportDocumentAtURL:error:;
- (id)initForOpeningContentTypes:;
- (id)initForOpeningFilesWithContentTypes:;
@end
