@interface CADGroupedAccountAccessHandler : CADAccountAccessHandler
@property (nonatomic) NSMutableArray accessHandlers;
- (id)restrictedCalendarRowIDsForAction:inDatabase:;
- (void)gatherRestrictedCalendarRowIDs:forAction:inDatabase:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isActionAllowed:forStore:inDatabase:;
- (void)addAccountAccessHandler:;
- (id)accessHandlers;
- (id)initWithDatabaseDataProvider:;
@end
