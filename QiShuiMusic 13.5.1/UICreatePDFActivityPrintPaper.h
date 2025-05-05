@interface UICreatePDFActivityPrintPaper : UIPrintPaper
@property (nonatomic) {CGSize=dd} _paperSize;
- (id)paperSize;
- (id)_paperSize;
- (id)printableRect;
- (id)initWithPaperSize:;
- (id)_keywordForPDFMetadata;
- (void)set_paperSize:;
@end
