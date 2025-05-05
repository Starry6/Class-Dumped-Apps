@interface CADFilterSuggestedCalendarsAccessHandler : CADAccountAccessHandler
@property (nonatomic) <CADPermissionValidator> permissionValidator;
- (void)gatherRestrictedCalendarRowIDs:forAction:inDatabase:;
- (id)initWithDatabaseDataProvider:permissionValidator:;
- (void).cxx_destruct;
- (id)permissionValidator;
@end
