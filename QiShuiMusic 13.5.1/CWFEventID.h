@interface CWFEventID : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString interfaceName;
- (void)setInterfaceName:;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (BOOL)isEqualToEventID:;
- (void).cxx_destruct;
- (id)description;
- (id)interfaceName;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)eventIDWithType:interfaceName:;
@end
