@interface BRShareCopyDocumentURLForRecordID : BRShareOperation
@property (nonatomic) @? copyDocumentURLCompletionBlock;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithRecordID:withServerLookup:;
- (id)initWithRecordID:fileURL:withServerLookup:;
- (id)copyDocumentURLCompletionBlock;
- (void)setCopyDocumentURLCompletionBlock:;
@end
