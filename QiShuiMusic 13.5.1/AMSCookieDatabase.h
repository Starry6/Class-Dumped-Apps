@interface AMSCookieDatabase : NSObject
@property (nonatomic) AMSSQLiteConnection connection;
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)accountIdentifier;
- (BOOL)_removeCookieProperties:error:;
- (BOOL)updateCookiesWithCookiePropertiesToAdd:cookiePropertiesToRemove:error:;
- (void)close;
- (BOOL)_addCookieProperties:error:;
- (void)_bindCookieProperties:column:position:using:;
- (id)_cookieDictionaryForCursor:;
- (BOOL)connectionNeedsResetForCorruption:;
- (id)initWithConnection:identifier:;
- (id)cookiePropertiesWithError:;
- (id)connection;
- (void).cxx_destruct;
- (BOOL)_executeStatement:columns:forCookieProperties:error:;
+ (id)cookieDatabaseForIdentifier:error:;
+ (id)_databasePathForIdentifier:error:;
+ (id)_dataVaultPathForIdentifier:error:;
@end
