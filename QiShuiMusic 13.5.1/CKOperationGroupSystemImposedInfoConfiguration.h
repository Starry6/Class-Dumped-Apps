@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject
@property (nonatomic) BOOL isUplink;
@property (nonatomic) BOOL allowsCellularAccess;
- (BOOL)allowsCellularAccess;
- (void)setAllowsCellularAccess:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setIsUplink:;
- (BOOL)isUplink;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
