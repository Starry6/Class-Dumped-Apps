@interface BRFileProvidingOperation : BROperation
@property (nonatomic) BOOL wantsCurrentVersion;
@property (nonatomic) @? fileProvidingCompletion;
- (id)fileProvidingCompletion;
- (BOOL)wantsCurrentVersion;
- (void)main;
- (id)initWithURL:readingOptions:;
- (void).cxx_destruct;
- (void)setWantsCurrentVersion:;
- (void)finishWithResult:error:;
- (void)setFileProvidingCompletion:;
@end
