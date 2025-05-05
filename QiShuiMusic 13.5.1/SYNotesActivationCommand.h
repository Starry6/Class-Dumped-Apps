@interface SYNotesActivationCommand : NSObject
@property (nonatomic) SYNotesActivationRequest activationRequest;
- (id)init;
- (void)activateWithCompletion:;
- (void).cxx_destruct;
- (void)setActivationRequest:;
- (void)_loadDataFromFileURLs:withCompletion:;
- (id)activationRequest;
+ (void)activateWithMetaActivity:completion:;
+ (void)activateWithDomainIdentifier:noteIdentifier:completion:;
+ (void)setRemotePresentationEnabled:;
+ (BOOL)remotePresentationEnabled;
+ (void)activateWithNoteIdentifier:completion:;
+ (Class)_iOSImpl;
@end
