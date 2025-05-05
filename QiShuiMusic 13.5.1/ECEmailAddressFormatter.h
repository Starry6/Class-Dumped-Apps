@interface ECEmailAddressFormatter : NSFormatter
@property (nonatomic) BOOL shouldIncludeDisplayName;
- (id)stringForObjectValue:;
- (id)init;
- (id)_stringFromEmailAddressList:includeDisplayName:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)_stringFromMailboxAddress:includeDisplayName:;
- (id)emailAddressFromString:;
- (id)stringFromEmailAddressList:;
- (id)_stringFromEmailAddressConvertible:includeDisplayName:;
- (id)stringFromEmailAddress:;
- (void)setShouldIncludeDisplayName:;
- (id)_stringFromGroupEmailAddress:;
- (BOOL)shouldIncludeDisplayName;
- (id)stringFromEmailAddressConvertible:;
- (id)_stringFromEmailAddress:includeDisplayName:;
- (id)initWithStyle:;
- (id)_groupListString:;
@end
