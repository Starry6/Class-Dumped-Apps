@interface DCDocCamPDFGenerator : NSObject
+ (id)fileManager;
+ (void)applicationWillTerminate:;
+ (id)syncGeneratorQueue;
+ (id)fileQueue;
+ (id)rootPDFFolderPath;
+ (void)deleteAllDocCamPDFs;
+ (id)folderPathForDocumentInfoCollectionIdentifier:;
+ (id)folderPathForDocumentInfoCollection:;
+ (id)versionfolderPathForDocumentInfoCollection:;
+ (id)versionPDFPathForDocumentInfoCollection:;
+ (void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:;
+ (void)createTmpDirectory:;
+ (void)deletePDFFolderIfExistsForDocumentInfoCollection:;
+ (void)deletePDFForDocumentInfoCollectionIfExists:;
+ (id)pdfURLForDocumentInfoCollection:;
+ (void)generatePDFsIfNecessaryForDocumentInfoCollection:imageCache:displayWindow:presentingViewController:completionHandler:;
+ (id)blockingGeneratepdfURLForDocumentInfoCollection:imageCache:withProgress:error:;
+ (void)performPDFGenerationWithGenerator:docInfoCollection:imageCache:progress:;
@end
