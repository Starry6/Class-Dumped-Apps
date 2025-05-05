@interface EMDeliveryAccount : EMAccount
@property (nonatomic) Q maximumMessageBytes;
@property (nonatomic) NSString username;
@property (nonatomic) NSString hostname;
@property (nonatomic) BOOL primaryiCloudAccount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostname;
- (id)username;
- (void)setHostname:;
- (void)setUsername:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)maximumMessageBytes;
- (void)setMaximumMessageBytes:;
- (BOOL)isPrimaryiCloudAccount;
- (void)setPrimaryiCloudAccount:;
- (id)initWithObjectID:name:hostname:builder:;
- (void)_commonInitName:hostname:builder:;
+ (BOOL)supportsSecureCoding;
@end
