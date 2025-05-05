@interface SSBDatabaseUpdaterStatus : NSObject
@property (nonatomic) NSString provider;
@property (nonatomic) Q databaseUpdaterState;
- (id)provider;
- (unsigned long long)databaseUpdaterState;
- (id)_initWithDatabaseUpdaterStatus:;
@end
