@interface DOCDownloadImportManager : NSObject
- (id)interface;
- (void)importPlaceholderAtURLToDownloadsDirectory:completion:;
- (void)replacePlaceholder:withFinalFileURL:completionHandler:;
- (id)_moveItemAtURLToDownloadsLocation:error:;
@end
