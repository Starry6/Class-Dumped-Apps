@interface CTCATargetVector : NSObject
@property (nonatomic) CTCATargetVectorAxis x;
@property (nonatomic) CTCATargetVectorAxis y;
- (void)setX:;
- (void)setY:;
- (id)y;
- (id)initWithCoder:;
- (id)x;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
