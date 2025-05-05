@interface CXLabeledHandle : NSObject
@property (nonatomic) CXHandle handle;
@property (nonatomic) NSString label;
- (id)init;
- (id)handle;
- (void)setHandle:;
- (void)setLabel:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isEqualToLabeledHandle:;
- (id)initWithHandle:label:;
+ (BOOL)supportsSecureCoding;
@end
