@interface CADAllowSpecifiedAccountsAccessHandler : CADAccountAccessHandler
@property (nonatomic) NSSet allowedSourceIdentifiers;
- (id)allowedSourceIdentifiers;
- (void).cxx_destruct;
- (id)initWithAllowedSourceIdentifiers:databaseDataProvider:;
- (BOOL)isActionAllowed:forStore:inDatabase:;
@end
