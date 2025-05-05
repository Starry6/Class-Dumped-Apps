@interface CVNLPCommSafetyTextProvider : NSObject
- (void)provideTextItemsWithConversationIdentifier:startDate:endDate:progressHandler:;
+ (id)defaultTextProvider;
+ (void)setDefaultTextProvider:;
@end
