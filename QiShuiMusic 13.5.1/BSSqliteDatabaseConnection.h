@interface BSSqliteDatabaseConnection : NSObject
- (id)init;
- (void)dealloc;
- (id)prepareStatement:;
- (void)close;
- (id)initWithInMemoryDatabase;
- (id)initWithFileURL:dataProtectionClass:;
- (void).cxx_destruct;
- (BOOL)truncateDatabaseAndReturnError:;
@end
