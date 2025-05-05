@interface LNFetchActionForAutoShortcutPhraseOperation : LNInterfaceConnectionOperation
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString autoShortcutPhrase;
@property (nonatomic) LNAction result;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)setResult:;
- (id)completionHandler;
- (id)initWithConnectionInterface:autoShortcutPhrase:completionHandler:;
- (id)autoShortcutPhrase;
- (void)setAutoShortcutPhrase:;
@end
