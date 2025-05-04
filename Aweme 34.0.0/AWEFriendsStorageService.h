@interface AWEFriendsStorageService : NSObject
+ (BOOL)hasSetup;
+ (void)setupStorageGetObject:;
+ (void)setupStorageGetArray:;
+ (id)arrayForKey:domain:;
+ (id)objectForKey:domain:;
@end
