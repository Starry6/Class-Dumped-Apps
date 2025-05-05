@interface IMAutomationGroupChat : IMCoreAutomationHook
- (id)createGroupChatWithDestinationIDs:error:optArguments:;
- (id)_runChangeParticipantsQueryWithGroupID:participants:timeOut:error:optArguments:addParticipants:;
- (id)addParticipantsWithGroupID:participants:timeOut:error:optArguments:;
- (id)removeParticipantsWithGroupID:participants:timeOut:error:optArguments:;
- (id)changeGroupNameWithGroupID:newName:timeOut:error:optArguments:;
- (id)groupParticipantsWithGroupID:timeOut:error:optArguments:;
- (id)groupNameWithGroupID:timeOut:error:optArguments:;
@end
