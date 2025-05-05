@interface WBSTabDialogInformation : NSObject
@property (nonatomic) {?=iQ} slot;
@property (nonatomic) NSArray cancellationExemptions;
@property (nonatomic) BOOL blockingWebProcess;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL presented;
- (id)slot;
- (void)setSlot:;
- (BOOL)isPresented;
- (void).cxx_destruct;
- (id)description;
- (void)setCancellationExemptions:;
- (BOOL)isExemptFromCancellationInContext:;
- (id)cancellationExemptions;
- (id)initWithPresentationBlock:dismissalBlock:blocksWebProcessUntilDismissed:;
- (void)presentIfNeeded;
- (void)dismissWithResponse:;
- (BOOL)isBlockingWebProcess;
- (BOOL)isDismissed;
@end
