@interface CNAutocompleteRecentResult : CNAutocompleteResult
@property (nonatomic) NSDate date;
@property (nonatomic) BOOL matchesSendingAddress;
@property (nonatomic) BOOL completesChosenGroup;
- (id)date;
- (void).cxx_destruct;
- (BOOL)matchesSendingAddress;
- (void)setMatchesSendingAddress:;
- (BOOL)completesChosenGroup;
- (void)setCompletesChosenGroup:;
+ (id)comparators;
+ (id)contactResultWithDisplayName:value:lastSendingAddress:date:;
+ (id)groupResultWithDisplayName:date:;
@end
