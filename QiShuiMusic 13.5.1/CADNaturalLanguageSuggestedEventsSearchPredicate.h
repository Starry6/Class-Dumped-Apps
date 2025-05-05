@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (id)description;
- (id)copyWithZone:;
- (id)initWithSearchString:startDate:timeZone:;
- (id)initWithSearchString:timeZone:;
- (id)copyMatchingItemsWithDatabase:;
- (id)initWithSearchString:allNLEvents:startDate:timeZone:;
+ (BOOL)supportsSecureCoding;
@end
