@interface CNAutocompleteResultFactory : NSObject
- (void).cxx_destruct;
- (id)localContactResultWithDisplayName:value:nameComponents:contactIdentifier:;
- (id)initWithPriorityDomain:sendingAddress:;
- (id)localGroupResultWithDisplayName:groupIdentifier:;
- (id)localGroupResultWithDisplayName:groupIdentifier:membersProvider:;
- (id)duetGroupResultWithDisplayName:groupIdentifier:membersProvider:;
- (id)recentResultWithDisplayName:value:lastSendingAddress:dateCount:date:group:completesChosenGroup:;
- (id)frequentRecentResultWithDisplayName:value:lastSendingAddress:date:group:completesChosenGroup:;
- (id)infrequentRecentResultWithDisplayName:value:lastSendingAddress:dateCount:date:group:completesChosenGroup:;
- (id)suggestedResultWithDisplayName:value:nameComponents:;
- (id)MAIDResultWithDisplayName:value:nameComponents:;
- (id)MAIDGroupResultWithDisplayName:groupIdentifier:membersProvider:;
- (id)extensionResultWithDisplayName:value:nameComponents:;
- (id)extensionGroupResultWithDisplayName:groupIdentifier:membersProvider:;
- (id)directoryServerResultWithDisplayName:value:nameComponents:;
- (id)calendarServerResultWithDisplayName:value:nameComponents:userInfo:;
- (id)duetResultWithDisplayName:value:contactIdentifier:;
- (void)applySearchContextToResult:;
- (void)applyPreferredDomainBitToResult:;
- (void)applyLastSendingAddressBitToResult:;
+ (id)factoryWithPriorityDomain:sendingAddress:;
@end
