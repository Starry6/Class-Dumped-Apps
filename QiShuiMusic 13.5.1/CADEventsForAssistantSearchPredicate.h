@interface CADEventsForAssistantSearchPredicate : EKPredicate
@property (nonatomic) NSString location;
@property (nonatomic) NSString notes;
@property (nonatomic) NSArray participants;
@property (nonatomic) q limit;
- (id)notes;
- (long long)limit;
- (id)participants;
- (void)setParticipants:;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)setLimit:;
- (id)location;
- (void)encodeWithCoder:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (void)setNotes:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTimeZone:startDate:endDate:title:location:notes:participants:limit:;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
@end
