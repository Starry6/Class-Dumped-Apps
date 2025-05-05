@interface ML3DatabaseValidationClient : NSObject
- (id)init;
- (BOOL)validateDatabaseForConnection:;
- (BOOL)validateDatabaseForLibrary:;
- (BOOL)validateDatabaseAtPath:;
- (void).cxx_destruct;
- (BOOL)isValidatingDatabaseForPath:;
- (id)_validatableDatabaseForPath:;
- (BOOL)_validateDatabaseForPath:usingLibrary:;
+ (id)sharedClient;
@end
