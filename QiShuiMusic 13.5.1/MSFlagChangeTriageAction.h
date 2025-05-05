@interface MSFlagChangeTriageAction : MSTriageAction
@property (nonatomic) ECMessageFlags messageFlags;
@property (nonatomic) BOOL flagState;
@property (nonatomic) q reason;
@property (nonatomic) <MSFlagChangeTriageActionDelegate> delegate;
- (long long)reason;
- (id)_changeAction;
- (id)messageFlags;
- (id)initWithMessageListSelection:delegate:reason:;
- (void)_toggleFlagWithBuilder:;
- (BOOL)flagState;
@end
