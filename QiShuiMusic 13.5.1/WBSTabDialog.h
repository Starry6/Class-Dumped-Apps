@interface WBSTabDialog : NSObject
@property (nonatomic) BOOL blocksWebProcessUntilDismissed;
@property (nonatomic) NSArray cancellationExemptions;
- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)setBlocksWebProcessUntilDismissed:;
- (void)setCancellationExemptions:;
- (id)createInfo;
- (BOOL)blocksWebProcessUntilDismissed;
- (id)cancellationExemptions;
+ (id)tabDialogWithPresentationBlock:dismissalBlock:;
@end
