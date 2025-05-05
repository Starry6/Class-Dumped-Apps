@interface SBSSystemNotesPresentationClientToServerProxy : NSObject
@property (nonatomic) <SBSSystemNotesPresentationServerToClientInterface> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)invalidate;
- (id)presentWithConfiguration:completion:;
- (id)activateConfiguration:;
- (void)_setupAndActivateConnection;
@end
