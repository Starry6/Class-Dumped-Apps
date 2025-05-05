@interface CVNLPCommSafetyCDTextProvider : CVNLPCommSafetyTextProvider
- (void)provideTextItemsWithConversationIdentifier:startDate:endDate:progressHandler:;
- (id)queryForConversationIdentifier:startDate:endDate:;
@end
