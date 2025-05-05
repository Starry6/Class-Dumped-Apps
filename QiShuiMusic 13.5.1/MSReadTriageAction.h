@interface MSReadTriageAction : MSFlagChangeTriageAction
- (id)messageFlags;
- (void)_toggleFlagWithBuilder:;
- (BOOL)flagState;
@end
