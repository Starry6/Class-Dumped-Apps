@interface CTCATargetReading : NSObject
@property (nonatomic) NSNumber targetId;
@property (nonatomic) NSNumber x;
@property (nonatomic) NSNumber y;
- (void)setX:;
- (void)setY:;
- (id)y;
- (id)initWithCoder:;
- (id)x;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setTargetId:;
- (id)targetId;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
