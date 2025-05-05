@interface QLActivityItemProvider : NSObject
@property (nonatomic) QLPreviewPrinter printer;
@property (nonatomic) QLItem activityPreviewItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)printer;
- (id)printInfo;
- (void).cxx_destruct;
- (void)setPrinter:;
- (id)activityViewControllerPlaceholderItem:;
- (id)activityViewController:itemForActivityType:;
- (id)activityViewController:subjectForActivityType:;
- (id)activityViewControllerPlaceholderItems:;
- (id)mainItem;
- (id)_pdfPreviewDataAtURL:;
- (id)activityPreviewItem;
- (void)setActivityPreviewItem:;
@end
