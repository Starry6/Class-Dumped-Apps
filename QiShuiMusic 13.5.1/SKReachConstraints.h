@interface SKReachConstraints : NSObject
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (void)setUpperAngleLimit:;
- (void)setLowerAngleLimit:;
- (id)initWithLowerAngleLimit:upperAngleLimit:;
- (double)lowerAngleLimit;
- (double)upperAngleLimit;
+ (BOOL)supportsSecureCoding;
@end
