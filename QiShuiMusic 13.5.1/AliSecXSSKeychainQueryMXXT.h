@interface AliSecXSSKeychainQueryMXXT : NSObject
@property (nonatomic) NSString account;
@property (nonatomic) NSString service;
@property (nonatomic) NSString label;
@property (nonatomic) NSString accessGroup;
@property (nonatomic) NSData passwordData;
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
+ (id)errorWithCode:;
@end
