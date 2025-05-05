@interface IMTrimDatabaseToDays : IMAbstractDatabaseTrimmer
@property (nonatomic) q newerThanDays;
- (id)initWithSourceDatabasePath:destinationDatabasePath:newerThanDays:;
- (void)performMessageSelectionWithOperation:;
- (long long)newerThanDays;
@end
