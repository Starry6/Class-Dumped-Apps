@interface STPersonContactHandle : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) NSString label;
@property (nonatomic) Q type;
- (id)handle;
- (void)setHandle:;
- (void)setType:;
- (void)setLabel:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isEqualToPersonContactHandle:;
+ (BOOL)supportsSecureCoding;
@end
