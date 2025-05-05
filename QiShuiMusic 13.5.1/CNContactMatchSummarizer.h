@interface CNContactMatchSummarizer : NSObject
- (id)init;
- (void)dealloc;
- (id)summariesFutureForContactsIdentifiers:matchInfos:contactStore:scheduler:;
- (id)summaryForContact:matchInfo:;
- (id)attributedStringForPropertyValueString:queryTerms:outMatchCount:;
+ (id)summaryProperties;
+ (id)summaryPropertyForMatchInfo:;
+ (id)keyDescriptorForContactIdentifiers:matchInfos:;
@end
