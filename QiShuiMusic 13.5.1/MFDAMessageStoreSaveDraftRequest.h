@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest
@property (nonatomic) BOOL shouldSend;
@property (nonatomic) BOOL isUserRequested;
- (void).cxx_destruct;
- (BOOL)isUserRequested;
- (unsigned long long)generationNumber;
- (BOOL)shouldSend;
- (id)initWithMessage:mailbox:;
@end
