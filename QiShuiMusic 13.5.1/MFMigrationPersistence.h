@interface MFMigrationPersistence : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isForeground;
- (void)autofetchAccount:mailboxUid:;
- (void)networkActivityStarted:;
- (void)networkActivityEnded:;
- (BOOL)isMobileMail;
- (BOOL)isMaild;
- (BOOL)isAllowedToAccessProtectedData;
- (BOOL)canRegisterForAPSPush;
- (BOOL)canUseSpotlightIndex;
+ (BOOL)migrateDatabaseAtPath:;
@end
