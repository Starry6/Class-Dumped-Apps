@interface MSMoveTriageAction : MSTriageAction
- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:delegate:destinationMailboxType:flagChange:copyMessages:;
- (id)initWithMessageListSelection:delegate:destinationMailbox:flagChange:copyMessages:;
@end
