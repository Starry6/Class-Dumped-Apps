@interface WBCollectionConfiguration : NSObject
@property (nonatomic) q collectionType;
@property (nonatomic) BOOL isReadonly;
@property (nonatomic) BOOL isInMemoryDatabase;
@property (nonatomic) BOOL createIfNeeded;
@property (nonatomic) NSString databasePath;
@property (nonatomic) Q maximumTabsPerTabGroup;
@property (nonatomic) BOOL skipsExternalNotifications;
@property (nonatomic) q storeOwner;
- (id)databasePath;
- (BOOL)createIfNeeded;
- (void)setStoreOwner:;
- (long long)collectionType;
- (void)setMaximumTabsPerTabGroup:;
- (BOOL)skipsExternalNotifications;
- (BOOL)isReadonly;
- (void)setSkipsExternalNotifications:;
- (unsigned long long)maximumTabsPerTabGroup;
- (void).cxx_destruct;
- (long long)storeOwner;
- (BOOL)isInMemoryDatabase;
- (id)initWithCollectionType:databasePath:readonly:createIfNeeded:;
- (id)initWithCollectionType:databasePath:readonly:;
- (id)copyWithZone:;
+ (id)safariBookmarkCollectionConfiguration;
+ (id)pptTabCollectionConfiguration;
+ (id)safariTabCollectionConfiguration;
+ (id)inMemoryBookmarkCollectionConfiguration;
+ (id)readonlySafariTabCollectionConfiguration;
+ (id)readonlySafariBookmarkCollectionConfiguration;
+ (id)inMemoryTabCollectionConfiguration;
@end
