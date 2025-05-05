@interface BMRegistrar : BMSQLStore
@property (nonatomic) NSDictionary registeredClientsByStream;
@property (nonatomic) NSDictionary streamRegistrationCounts;
- (id)init;
- (id)initWithURL:;
- (void).cxx_destruct;
- (BOOL)propagateDeletionOfEventsInStream:withIdentifiers:;
- (BOOL)registerClientWithBundleID:databaseURL:source:;
- (id)registeredClientsByStream;
- (id)streamRegistrationCounts;
- (id)registrationsForStream:;
- (BOOL)propagateDeletionOfEvents:;
+ (id)migrations;
+ (id)centralRegistrar;
@end
