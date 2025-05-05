@interface CKServerChangeToken : NSObject
@property (nonatomic) NSData data;
- (id)init;
- (id)data;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)description;
- (void)setData:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
