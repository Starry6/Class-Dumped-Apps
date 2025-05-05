@interface NEAccountIdentifiers : NSObject
@property (nonatomic) NSArray mailAccountIdentifiers;
@property (nonatomic) NSArray calendarAccountIdentifiers;
@property (nonatomic) NSArray contactsAccountIdentifiers;
- (void).cxx_destruct;
- (id)mailAccountIdentifiers;
- (void)setMailAccountIdentifiers:;
- (id)calendarAccountIdentifiers;
- (void)setCalendarAccountIdentifiers:;
- (id)contactsAccountIdentifiers;
- (void)setContactsAccountIdentifiers:;
@end
