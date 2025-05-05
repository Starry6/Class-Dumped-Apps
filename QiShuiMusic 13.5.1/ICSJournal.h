@interface ICSJournal : ICSComponent
@property (nonatomic) NSArray attach;
@property (nonatomic) NSArray attendee;
@property (nonatomic) NSInteger classification;
@property (nonatomic) ICSDate created;
@property (nonatomic) NSString description;
@property (nonatomic) ICSDate dtstamp;
@property (nonatomic) ICSDate dtstart;
@property (nonatomic) NSArray exdate;
@property (nonatomic) NSArray exrule;
@property (nonatomic) ICSDate last_modified;
@property (nonatomic) ICSUserAddress organizer;
@property (nonatomic) NSArray rdate;
@property (nonatomic) ICSDate recurrence_id;
@property (nonatomic) NSArray rrule;
@property (nonatomic) Q sequence;
@property (nonatomic) NSInteger status;
@property (nonatomic) NSString summary;
@property (nonatomic) NSString uid;
@property (nonatomic) NSURL url;
- (BOOL)validate:;
+ (id)name;
@end
