@interface SYDStoreConfiguration : NSObject
@property (nonatomic) SYDStoreID storeID;
@property (nonatomic) NSString processName;
- (id)init;
- (id)storeID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)processName;
- (void)encodeWithCoder:;
- (void)setStoreID:;
- (void).cxx_destruct;
- (void)setProcessName:;
- (id)initWithStoreID:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
