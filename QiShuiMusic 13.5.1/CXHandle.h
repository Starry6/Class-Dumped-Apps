@interface CXHandle : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString value;
- (id)initWithType:value:;
- (id)init;
- (BOOL)isEqualToHandle:;
- (void)setType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)stringForType:;
@end
