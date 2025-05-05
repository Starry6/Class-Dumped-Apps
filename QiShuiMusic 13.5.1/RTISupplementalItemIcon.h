@interface RTISupplementalItemIcon : NSObject
@property (nonatomic) NSString dataType;
@property (nonatomic) NSData data;
- (id)data;
- (id)initWithCoder:;
- (id)dataType;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithDataType:data:;
+ (BOOL)supportsSecureCoding;
@end
