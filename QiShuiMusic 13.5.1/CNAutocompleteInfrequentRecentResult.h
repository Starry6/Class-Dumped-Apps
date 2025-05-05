@interface CNAutocompleteInfrequentRecentResult : CNAutocompleteRecentResult
@property (nonatomic) Q dateCount;
- (unsigned long long)dateCount;
- (void)setDateCount:;
+ (unsigned long long)category;
+ (id)comparators;
+ (id)contactResultWithDisplayName:value:lastSendingAddress:dateCount:date:;
+ (id)groupResultWithDisplayName:dateCount:date:;
@end
