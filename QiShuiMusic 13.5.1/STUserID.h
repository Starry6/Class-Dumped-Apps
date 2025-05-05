@interface STUserID : NSObject
@property (nonatomic) NSNumber dsid;
- (id)dsid;
- (id)initWithDSID:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToUserID:;
+ (BOOL)supportsSecureCoding;
@end
