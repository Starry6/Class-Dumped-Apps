@interface LSSliceInfo : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger subtype;
- (int)subtype;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (int)type;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithType:subtype:;
- (id)initWithSliceDescData:;
- (id)sliceValue;
+ (BOOL)supportsSecureCoding;
@end
