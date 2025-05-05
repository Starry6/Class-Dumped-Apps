@interface BRShareLookupParticipantsOperation : BRShareOperation
@property (nonatomic) @? lookupParticipantsCompletionBlock;
- (void)main;
- (void).cxx_destruct;
- (void)finishWithResult:error:;
- (id)initWithUserIdentities:;
- (id)lookupParticipantsCompletionBlock;
- (void)setLookupParticipantsCompletionBlock:;
@end
