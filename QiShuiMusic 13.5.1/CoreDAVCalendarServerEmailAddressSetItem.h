@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem
@property (nonatomic) NSMutableArray emailAddresses;
@property (nonatomic) CoreDAVItemWithNoChildren unauthenticated;
- (void)setUnauthenticated:;
- (id)emailAddresses;
- (id)init;
- (void)addEmailAddress:;
- (void).cxx_destruct;
- (void)setEmailAddresses:;
- (id)description;
- (id)unauthenticated;
+ (id)copyParseRules;
@end
