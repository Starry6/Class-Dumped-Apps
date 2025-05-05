@interface BRSharingCopyEtagOperation : BROperation
@property (nonatomic) @? sharingEtagCompletionBlock;
- (id)initWithURL:;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)sharingEtagCompletionBlock;
- (void)setSharingEtagCompletionBlock:;
@end
