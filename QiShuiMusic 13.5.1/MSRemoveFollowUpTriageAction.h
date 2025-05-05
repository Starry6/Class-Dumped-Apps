@interface MSRemoveFollowUpTriageAction : MSTriageAction
@property (nonatomic) EMFollowUp followUp;
- (void).cxx_destruct;
- (id)_changeAction;
- (void)setFollowUp:;
- (id)followUp;
- (id)initWithMessageListSelection:delegate:followUp:;
@end
