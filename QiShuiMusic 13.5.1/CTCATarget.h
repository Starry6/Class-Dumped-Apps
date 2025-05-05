@interface CTCATarget : NSObject
@property (nonatomic) NSNumber targetId;
@property (nonatomic) NSString targetDescription;
@property (nonatomic) NSNumber x;
@property (nonatomic) NSNumber y;
- (void)setX:;
- (void)setY:;
- (id)y;
- (id)initWithCoder:;
- (id)x;
- (void)encodeWithCoder:;
- (id)targetDescription;
- (void).cxx_destruct;
- (id)description;
- (void)setTargetId:;
- (id)targetId;
- (id)copyWithZone:;
- (void)setTargetDescription:;
+ (BOOL)supportsSecureCoding;
@end
