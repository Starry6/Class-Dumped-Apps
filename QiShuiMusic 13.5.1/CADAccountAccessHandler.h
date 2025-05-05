@interface CADAccountAccessHandler : NSObject
@property (nonatomic) <CADCalendarDatabaseDataProvider> dataProvider;
- (id)dataProvider;
- (id)restrictedCalendarRowIDsForAction:inDatabase:;
- (void)gatherRestrictedCalendarRowIDs:forAction:inDatabase:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isActionAllowed:forStore:inDatabase:;
- (id)initWithDatabaseDataProvider:;
@end
