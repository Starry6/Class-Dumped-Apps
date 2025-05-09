@interface SAMKeychainQuery : NSObject
@property (nonatomic) NSString account;
@property (nonatomic) NSString service;
@property (nonatomic) NSString label;
@property (nonatomic) NSString accessGroup;
@property (nonatomic) Q synchronizationMode;
@property (nonatomic) NSData passwordData;
@property (nonatomic) <NSCoding> passwordObject;
@property (nonatomic) NSString password;
- (id)account;
- (id)accessGroup;
- (void)setPassword:;
- (void)setService:;
- (id)password;
- (void)setAccount:;
- (void)setAccessGroup:;
- (BOOL)fetch:;
- (id)query;
- (void)setLabel:;
- (BOOL)save:;
- (id)label;
- (id)service;
- (void).cxx_destruct;
- (BOOL)deleteItem:;
- (id)fetchAll:;
- (id)passwordData;
- (void)setPasswordData:;
- (void)setPasswordObject:;
- (id)passwordObject;
- (unsigned long long)synchronizationMode;
- (void)setSynchronizationMode:;
+ (id)errorWithCode:;
+ (BOOL)isSynchronizationAvailable;
@end
