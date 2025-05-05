@interface SGSuggestions : NSObject
@property (nonatomic) NSArray contacts;
@property (nonatomic) NSArray events;
@property (nonatomic) NSArray reminders;
- (id)contacts;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)events;
- (id)description;
- (id)copyWithZone:;
- (id)initWithContacts:events:reminders:;
- (id)reminders;
+ (BOOL)supportsSecureCoding;
@end
