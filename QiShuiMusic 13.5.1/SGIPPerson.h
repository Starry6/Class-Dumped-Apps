@interface SGIPPerson : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString handle;
@property (nonatomic) NSString handleType;
- (void)setName:;
- (id)handle;
- (void)setHandle:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setHandleType:;
- (void)encodeWithCoder:;
- (id)handleType;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToPerson:;
+ (BOOL)supportsSecureCoding;
+ (id)personWithIPPerson:;
@end
