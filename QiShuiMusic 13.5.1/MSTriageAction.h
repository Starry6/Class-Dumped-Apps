@interface MSTriageAction : NSObject
@property (nonatomic) MSMessageListItemSelection messageListItemSelection;
@property (nonatomic) EMMessageRepository messageRepository;
@property (nonatomic) <MSTriageActionDelegate> delegate;
- (id)delegate;
- (void).cxx_destruct;
- (id)_changeAction;
- (id)messageRepository;
- (void)performWithUndoManager:actionName:completion:;
- (id)initWithMessageListSelection:delegate:;
- (id)messageListItemSelection;
+ (id)log;
+ (void)_performAction:messageRepository:undoManager:actionName:;
@end
