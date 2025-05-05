@interface EMAccount : EMObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString username;
@property (nonatomic) NSString hostname;
@property (nonatomic) BOOL primaryiCloudAccount;
- (id)ef_publicDescription;
- (id)hostname;
- (id)username;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (BOOL)isPrimaryiCloudAccount;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForReceivingAccounts;
+ (id)predicateForDeliveryAccounts;
+ (id)sortDescriptorForNameAscending:;
@end
