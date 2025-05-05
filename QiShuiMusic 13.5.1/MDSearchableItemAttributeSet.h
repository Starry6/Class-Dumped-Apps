@interface MDSearchableItemAttributeSet : CSSearchableItemAttributeSet
@property (nonatomic) NSArray authorPersons;
@property (nonatomic) NSArray primaryRecipientPersons;
@property (nonatomic) NSArray recipients;
- (id)recipients;
- (void)setRecipients:;
- (void)setAuthorPersons:;
- (id)authorPersons;
- (void)setPrimaryRecipientPersons:;
- (id)primaryRecipientPersons;
+ (BOOL)supportsSecureCoding;
@end
