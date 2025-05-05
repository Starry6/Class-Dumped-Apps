@interface DCActivityViewController : UIActivityViewController
@property (nonatomic) ICDocCamDocumentInfoCollection documentInfoCollection;
@property (nonatomic) ICDocCamImageCache imageCache;
@property (nonatomic) BOOL ignoreAttachmentsForCopyToPasteboard;
- (id)imageCache;
- (void)_performActivity:;
- (BOOL)_canShowWhileLocked;
- (void)setImageCache:;
- (void).cxx_destruct;
- (id)documentInfoCollection;
- (void)setDocumentInfoCollection:;
- (BOOL)inhibitPDFGenerationForActivityType:;
- (id)activityTypesThatInhibitPDFGeneration;
- (BOOL)ignoreAttachmentsForCopyToPasteboard;
- (void)setIgnoreAttachmentsForCopyToPasteboard:;
- (BOOL)writeGalleryPDFDataToPasteboardIfNecessaryForActivity:documentInfoCollection:;
@end
