@interface FPTransformOperation : FPActionOperation
@property (nonatomic) NSArray items;
@property (nonatomic) @? transformCompletionBlock;
- (id)items;
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (void)finishWithResult:error:;
- (void)actionMain;
- (void)presendNotifications;
- (id)initWithItemsOfDifferentProviders:action:;
- (id)finalItemsForStitcherForResult:;
- (void)postStitchingFinishWithResult:error:;
- (unsigned long long)transformItem:atIndex:;
- (id)transformCompletionBlock;
- (void)setTransformCompletionBlock:;
@end
