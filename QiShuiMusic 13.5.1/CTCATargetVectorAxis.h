@interface CTCATargetVectorAxis : NSObject
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber range;
- (void)setOffset:;
- (void)setRange:;
- (id)initWithCoder:;
- (id)offset;
- (id)range;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
