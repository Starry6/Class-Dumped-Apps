@interface CADContactEventsPredicate : EKPredicate
@property (nonatomic) NSSet contactEmailAddresses;
@property (nonatomic) NSSet contactNameComponents;
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithCalendarIDs:startDate:endDate:contacts:;
- (id)contactEmailAddresses;
- (void)setContactEmailAddresses:;
- (id)contactNameComponents;
- (void)setContactNameComponents:;
- (id)copyMatchingItemsWithDatabase:;
- (BOOL)_isCandidate:allowAllDayEvent:;
+ (BOOL)supportsSecureCoding;
@end
