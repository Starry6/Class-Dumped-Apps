@interface DAContactsSearchQuery : DASearchQuery
@property (nonatomic) NSString searchBase;
@property (nonatomic) NSString searchScope;
@property (nonatomic) BOOL includePhotos;
@property (nonatomic) BOOL calendarInitiated;
- (BOOL)includePhotos;
- (void)setIncludePhotos:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:consumer:;
- (id)initWithSearchString:searchBase:searchScope:consumer:;
- (id)searchBase;
- (void)setSearchBase:;
- (id)searchScope;
- (void)setSearchScope:;
- (BOOL)calendarInitiated;
- (void)setCalendarInitiated:;
+ (id)contactsSearchQueryWithSearchString:searchBase:searchScope:consumer:;
@end
